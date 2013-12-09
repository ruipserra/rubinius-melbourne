describe "An Sclass node" do
  relates <<-ruby do
      class << self
        42
      end
    ruby

    parse do
      [:sclass, [:self], [:scope, [:lit, 42]]]
    end
  end

  relates <<-ruby do
      class A
        class << self
          a
        end
        class B
        end
      end
    ruby

    parse do
      [:class,
       :A,
       nil,
       [:scope,
        [:block,
         [:sclass, [:self], [:scope, [:call, nil, :a, [:arglist]]]],
         [:class, :B, nil, [:scope]]]]]
    end
  end

  relates <<-ruby do
      x = "a"
      class << x
      end
    ruby

    parse do
      [:block,
        [:lasgn, :x, [:str, "a"]],
        [:sclass, [:lvar, :x], [:scope]]]
    end
  end

  relates <<-ruby do
    x = "a"
    m do
      class << x
      end
    end
    ruby
  end
end
