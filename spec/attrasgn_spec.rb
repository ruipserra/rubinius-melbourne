describe "An Attrasgn node" do
  relates <<-ruby do
      y = 0
      42.method = y
    ruby

    parse do
      [:block,
       [:lasgn, :y, [:lit, 0]],
       [:attrasgn, [:lit, 42], :method=, [:arglist, [:lvar, :y]]]]
    end
  end

  relates "a.m = *[1]" do
    parse do
      [:attrasgn,
       [:call, nil, :a, [:arglist]],
       :m=,
       [:arglist, [:svalue, [:splat, [:array, [:lit, 1]]]]]]
    end

    # attrasgn_splat
  end

  relates "a[*b] = c" do
    parse do
      [:attrasgn,
       [:call, nil, :a, [:arglist]],
       :[]=,
       [:arglist,
        [:splat, [:call, nil, :b, [:arglist]]],
        [:call, nil, :c, [:arglist]]]]
    end
  end

  relates "a[b, *c] = d" do
    parse do
      [:attrasgn,
       [:call, nil, :a, [:arglist]],
       :[]=,
       [:arglist,
        [:array,
         [:call, nil, :b, [:arglist]],
         [:splat, [:call, nil, :c, [:arglist]]]],
        [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "a[b, *c] = *d" do
    parse do
      [:attrasgn,
       [:call, nil, :a, [:arglist]],
       :[]=,
       [:arglist,
        [:array,
         [:call, nil, :b, [:arglist]],
         [:splat, [:call, nil, :c, [:arglist]]]],
        [:svalue, [:splat, [:call, nil, :d, [:arglist]]]]]]
    end
  end

  relates "a[b, *c] = d, e" do
    parse do
      [:attrasgn,
       [:call, nil, :a, [:arglist]],
       :[]=,
       [:arglist,
        [:array,
         [:call, nil, :b, [:arglist]],
         [:splat, [:call, nil, :c, [:arglist]]]],
        [:svalue,
         [:array, [:call, nil, :d, [:arglist]], [:call, nil, :e, [:arglist]]]]]]
    end
  end

  relates "a[42] = 24" do
    parse do
      [:attrasgn,
       [:call, nil, :a, [:arglist]],
       :[]=,
       [:arglist, [:lit, 42], [:lit, 24]]]
    end
  end

  relates "self[index, 0] = other_string" do
    parse do
      [:attrasgn,
       [:self],
       :[]=,
       [:arglist,
        [:call, nil, :index, [:arglist]],
        [:lit, 0],
        [:call, nil, :other_string, [:arglist]]]]
    end
  end

  relates <<-ruby do
      a = []
      a [42] = 24
    ruby

    parse do
      [:block,
       [:lasgn, :a, [:array]],
       [:attrasgn, [:lvar, :a], :[]=, [:arglist, [:lit, 42], [:lit, 24]]]]
    end
  end

  relates "m { |a.b| }" do
    # TODO
  end
end
