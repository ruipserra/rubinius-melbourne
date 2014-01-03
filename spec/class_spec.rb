describe "A Class node" do
  relates <<-ruby do
      class X
        puts((1 + 1))
        def blah
          puts("hello")
        end
      end
    ruby

    parse do
      [:class,
       :X,
       nil,
       [:scope,
        [:block,
         [:call,
          nil,
          :puts,
          [:arglist, [:call, [:lit, 1], :+, [:arglist, [:lit, 1]]]]],
         [:defn,
          :blah,
          [:args],
          [:scope,
           [:block, [:call, nil, :puts, [:arglist, [:str, "hello"]]]]]]]]]
    end
  end

  relates <<-ruby do
      class ::Y
        c
      end
    ruby

    parse do
      [:class, [:colon3, :Y], nil, [:scope, [:block, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      class X::Y
        c
      end
    ruby

    parse do
      [:class,
       [:colon2, [:const, :X], :Y],
       nil,
       [:scope, [:block, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      class X < Array
      end
    ruby

    parse do
      [:class, :X, [:const, :Array], [:scope]]
    end
  end

  relates <<-ruby do
      class X < expr
      end
    ruby

    parse do
      [:class, :X, [:call, nil, :expr, [:arglist]], [:scope]]
    end
  end

  relates <<-ruby do
      class X < Object
      end
    ruby

    parse do
      [:class, :X, [:const, :Object], [:scope]]
    end
  end
end
