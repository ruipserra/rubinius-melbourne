describe "A Return node" do
  relates "return" do
    parse do
      [:return]
    end
  end

  relates "return 1" do
    parse do
      [:return, [:lit, 1]]
    end
  end

  relates "return *1" do
    parse do
      [:return, [:svalue, [:splat, [:lit, 1]]]]
    end
  end

  relates <<-ruby do
      x = 1, 2
      return *x
    ruby

    parse do
      [:block,
        [:lasgn, :x, [:svalue, [:array, [:lit, 1], [:lit, 2]]]],
        [:return, [:svalue, [:splat, [:lvar, :x]]]]]
    end
  end

  relates "return 1, 2, 3" do
    parse do
      [:return, [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
    end
  end

  relates "return 1, 2, *c" do
    parse do
      [:return,
       [:array,
         [:lit, 1], [:lit, 2], [:splat, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates "return [*[1]]" do
    parse do
      [:return, [:array, [:splat, [:array, [:lit, 1]]]]]
    end
  end

  relates "return *[1]" do
    parse do
      [:return, [:svalue, [:splat, [:array, [:lit, 1]]]]]
    end
  end
end
