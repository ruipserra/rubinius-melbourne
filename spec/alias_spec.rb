describe "An Alias node" do
  relates <<-ruby do
      class X
        alias :y :x
      end
    ruby

    parse do
      [:class, :X, nil, [:scope, [:alias, [:lit, :y], [:lit, :x]]]]
    end
  end

  relates <<-ruby do
      class X
        alias y x
      end
    ruby

    parse do
      [:class, :X, nil, [:scope, [:alias, [:lit, :y], [:lit, :x]]]]
    end
  end

  relates <<-ruby do
      class X
        alias :"y\#{1}" :"x\#{2}"
      end
    ruby

    parse do
      [:class,
       :X,
       nil,
       [:scope,
        [:alias,
         [:dsym, "y", [:evstr, [:lit, 1]]],
         [:dsym, "x", [:evstr, [:lit, 2]]]]]]
    end
  end
end
