describe "An Ensure node" do
  relates <<-ruby do
      begin
        # do nothing
      rescue
        # do nothing
      ensure
        # do nothing
      end
    ruby

    parse do
      [:ensure, [:rescue, [:resbody, [:array], nil]], [:nil]]
    end
  end

  relates <<-ruby do
      begin
        (1 + 1)
      rescue SyntaxError => e1
        2
      rescue Exception => e2
        3
      else
        4
      ensure
        5
      end
    ruby

    parse do
      [:ensure,
         [:rescue,
          [:call, [:lit, 1], :+, [:arglist, [:lit, 1]]],
          [:resbody,
           [:array, [:const, :SyntaxError], [:lasgn, :e1, [:gvar, :$!]]],
           [:lit, 2]],
          [:resbody,
           [:array, [:const, :Exception], [:lasgn, :e2, [:gvar, :$!]]],
           [:lit, 3]],
          [:lit, 4]],
         [:lit, 5]]
    end
  end

  relates <<-ruby do
      begin
        a
      rescue
        # do nothing
      ensure
        # do nothing
      end
    ruby

    parse do
      [:ensure,
         [:rescue, [:call, nil, :a, [:arglist]], [:resbody, [:array], nil]],
         [:nil]]
    end
  end

  relates <<-ruby do
      begin
        14
        return 2
      ensure
        13
      end
    ruby

    parse do
      [:ensure, [:block, [:lit, 14], [:return, [:lit, 2]]], [:lit, 13]]
    end
  end

  relates <<-ruby do
      begin
        begin
          14
          return 2
        ensure
          13
        end
      ensure
        15
      end
    ruby

    parse do
      [:ensure,
       [:ensure, [:block, [:lit, 14], [:return, [:lit, 2]]], [:lit, 13]],
       [:lit, 15]]
    end
  end

  relates <<-ruby do
      begin
        14
        return 2
      ensure
        begin
          15
          return 3
        ensure
          16
        end
      end
    ruby

    parse do
      [:ensure,
        [:block, [:lit, 14], [:return, [:lit, 2]]],
        [:ensure, [:block, [:lit, 15], [:return, [:lit, 3]]], [:lit, 16]]]
    end
  end
end
