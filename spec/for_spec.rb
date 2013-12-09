describe "A For node" do
  relates <<-ruby do
      for o in ary do
        puts(o)
      end
    ruby

    parse do
      [:for,
       [:call, nil, :ary, [:arglist]],
       [:lasgn, :o],
       [:call, nil, :puts, [:arglist, [:lvar, :o]]]]
    end
  end

  relates <<-ruby do
      for i in (0..max) do
        # do nothing
      end
    ruby

    parse do
      [:for, [:dot2, [:lit, 0], [:call, nil, :max, [:arglist]]], [:lasgn, :i]]
    end
  end

  relates <<-ruby do
      for a, b in x do
        5
      end
    ruby

    parse do
      [:for,
       [:call, nil, :x, [:arglist]],
       [:masgn, [:array, [:lasgn, :a], [:lasgn, :b]]],
       [:lit, 5]]
    end
  end

  relates <<-ruby do
      for i in ()
        i
      end
    ruby

    parse do
      [:for, [:nil], [:lasgn, :i], [:lvar, :i]]
    end
  end

  relates <<-ruby do
      c = 1
      for i in a
        for j in b
          c
        end
      end
    ruby
  end
end
