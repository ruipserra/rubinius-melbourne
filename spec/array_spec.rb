describe "An Array node" do
  relates '[1, :b, "c"]' do
    parse do
      [:array, [:lit, 1], [:lit, :b], [:str, "c"]]
    end
  end

  relates "%w[a b c]" do
    parse do
      [:array, [:str, "a"], [:str, "b"], [:str, "c"]]
    end
  end

  relates '%w[a #{@b} c]' do
    parse do
      [:array, [:str, "a"], [:str, "\#{@b}"], [:str, "c"]]
    end
  end

  relates "%W[a b c]" do
    parse do
      [:array,
        [:str, "a"], [:str, "b"], [:str, "c"]]
    end
  end

  relates '%W[a #{@b} c]' do
    parse do
      [:array,
        [:str, "a"],
        [:dstr, "", [:evstr, [:ivar, :@b]]],
        [:str, "c"]]
    end
  end

  relates "[*[1]]" do
    parse do
      [:array, [:splat, [:array, [:lit, 1]]]]
    end
  end

  relates "[*1]" do
    parse do
      [:array, [:splat, [:lit, 1]]]
    end
  end

  relates "[[*1]]" do
    parse do
      [:array, [:array, [:splat, [:lit, 1]]]]
    end
  end

  relates "[1, *2]" do
    parse do
      [:array, [:lit, 1], [:splat, [:lit, 2]]]
    end
  end

  relates "[1, *c()]" do
    parse do
      [:array, [:lit, 1], [:splat, [:call, nil, :c, [:arglist]]]]
    end

    # TODO
  end

  relates <<-ruby do
      x = [2]
      [1, *x]
    ruby

    parse do
      [:block,
       [:lasgn, :x, [:array, [:lit, 2]]],
       [:array, [:lit, 1], [:splat, [:lvar, :x]]]]
    end

    # TODO
  end
end
