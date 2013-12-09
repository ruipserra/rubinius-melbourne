describe "A Rescue node" do
  relates "blah rescue nil" do
    parse do
      [:rescue, [:call, nil, :blah, [:arglist]], [:resbody, [:array], [:nil]]]
    end
  end

  relates <<-ruby do
      begin
        blah
      rescue
      end
    ruby

    parse do
      [:rescue, [:call, nil, :blah, [:arglist]], [:resbody, [:array], nil]]
    end
  end

  relates <<-ruby do
      begin
        a
      rescue A
        b
      rescue B
        c
      rescue C
        d
      end
    ruby

    parse do
      [:rescue,
       [:call, nil, :a, [:arglist]],
       [:resbody, [:array, [:const, :A]], [:call, nil, :b, [:arglist]]],
       [:resbody, [:array, [:const, :B]], [:call, nil, :c, [:arglist]]],
       [:resbody, [:array, [:const, :C]], [:call, nil, :d, [:arglist]]]]
    end
  end

  relates <<-ruby do
      begin
        a
      rescue => @e
        c
        d
      end
    ruby

    parse do
      [:rescue,
       [:call, nil, :a, [:arglist]],
       [:resbody,
        [:array, [:iasgn, :@e, [:gvar, :$!]]],
        [:block, [:call, nil, :c, [:arglist]], [:call, nil, :d, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      begin
        a
      rescue => e
        c
        d
      end
    ruby

    parse do
      [:rescue,
       [:call, nil, :a, [:arglist]],
       [:resbody,
        [:array, [:lasgn, :e, [:gvar, :$!]]],
        [:block, [:call, nil, :c, [:arglist]], [:call, nil, :d, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      begin
        a
      rescue => mes
        # do nothing
      end

      begin
        b
      rescue => mes
        # do nothing
      end
    ruby

    parse do
      [:block,
         [:rescue,
          [:call, nil, :a, [:arglist]],
          [:resbody, [:array, [:lasgn, :mes, [:gvar, :$!]]], nil]],
         [:rescue,
          [:call, nil, :b, [:arglist]],
          [:resbody, [:array, [:lasgn, :mes, [:gvar, :$!]]], nil]]]
    end
  end

  relates <<-ruby do
      begin
        blah
      rescue RuntimeError => r
      end
    ruby

    parse do
      [:rescue,
       [:call, nil, :blah, [:arglist]],
       [:resbody,
        [:array, [:const, :RuntimeError], [:lasgn, :r, [:gvar, :$!]]],
        nil]]
    end
  end

  relates <<-ruby do
      begin
        1
      rescue => @e
      end
    ruby

    parse do
      [:rescue, [:lit, 1], [:resbody, [:array, [:iasgn, :@e, [:gvar, :$!]]], nil]]
    end
  end

  relates <<-ruby do
      begin
        1
      rescue
        var = 2
      end
    ruby

    parse do
      [:rescue, [:lit, 1], [:resbody, [:array], [:lasgn, :var, [:lit, 2]]]]
    end
  end

  relates <<-ruby do
      begin
        1
      rescue => e
      end
    ruby

    parse do
      [:rescue, [:lit, 1], [:resbody, [:array, [:lasgn, :e, [:gvar, :$!]]], nil]]
    end
  end

  relates <<-ruby do
      begin
        1
      rescue
        a.b = nil
      end
    ruby

    parse do
      [:rescue,
       [:lit, 1],
       [:resbody,
        [:array],
        [:attrasgn, [:call, nil, :a, [:arglist]], :b=, [:arglist, [:nil]]]]]
    end
  end

  relates <<-ruby do
      begin
        1
      rescue => e
        var = 2
      end
    ruby

    parse do
      [:rescue,
       [:lit, 1],
       [:resbody, [:array, [:lasgn, :e, [:gvar, :$!]]], [:lasgn, :var, [:lit, 2]]]]
    end
  end

  relates <<-ruby do
      begin
        12
      rescue String
        13
      else
        14
      end
    ruby

    parse do
      [:rescue,
       [:lit, 12],
       [:resbody, [:array, [:const, :String]], [:lit, 13]],
       [:lit, 14]]
    end
  end

  relates <<-ruby do
      begin
        12
      rescue *blah
        13
      end
    ruby

    parse do
      [:rescue,
       [:lit, 12],
       [:resbody, [:splat, [:call, nil, :blah, [:arglist]]], [:lit, 13]]]
    end
  end

  relates <<-ruby do
      begin
        12
      rescue String, *blah
        13
      end
    ruby

    parse do
      [:rescue,
       [:lit, 12],
       [:resbody,
        [:array, [:const, :String], [:splat, [:call, nil, :blah, [:arglist]]]],
        [:lit, 13]]]
    end
  end

  relates <<-ruby do
      begin
        12
      rescue *blah => e
        13
      end
    ruby

    parse do
      [:rescue,
       [:lit, 12],
       [:resbody,
        [:splat, [:call, nil, :blah, [:arglist]], [:lasgn, :e, [:gvar, :$!]]],
        [:lit, 13]]]
    end
  end

  relates <<-ruby do
      begin
        12
      rescue String, *blah => e
        13
      end
    ruby

    parse do
      [:rescue,
       [:lit, 12],
       [:resbody,
        [:array,
         [:const, :String],
         [:splat, [:call, nil, :blah, [:arglist]]],
         [:lasgn, :e, [:gvar, :$!]]],
        [:lit, 13]]]
    end
  end

  relates <<-ruby do
      begin
        12
      rescue String
        return nil
      end
    ruby

    parse do
      [:rescue,
       [:lit, 12],
       [:resbody, [:array, [:const, :String]], [:return, [:nil]]]]
    end
  end

  relates <<-ruby do
      begin
        1
      rescue
        begin
          2
        rescue
          return 3
        end
      end
    ruby

    parse do
      [:rescue,
       [:lit, 1],
       [:resbody,
        [:array],
        [:rescue, [:lit, 2], [:resbody, [:array], [:return, [:lit, 3]]]]]]
    end
  end

  relates <<-ruby do
      begin
        1
      rescue
        def x
          return 2
        end
        x
      end
    ruby

    parse do
      [:rescue,
       [:lit, 1],
       [:resbody,
        [:array],
        [:block,
         [:defn, :x, [:args], [:scope, [:block, [:return, [:lit, 2]]]]],
         [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      begin
        while 1
          2
          break :brk
        end
      rescue
        3
      end
    ruby

    # TODO
  end

  relates <<-ruby do
      begin
        1
      rescue
        while 2
          3
          break :brk
        end
      end
    ruby

    # TODO
  end
end
