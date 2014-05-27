describe "A Masgn node" do
  parse "a, b.c = b.c, true" do
    [:masgn,
     [:array,
      [:lasgn, :a],
      [:attrasgn, [:call, nil, :b, [:arglist]], :c=, [:arglist]]],
     [:array, [:call, [:call, nil, :b, [:arglist]], :c, [:arglist]], [:true]]]
  end

  parse "a, b = 1, 2, 3" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b]],
     [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
  end

  parse "a, b = c, d" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b]],
     [:array, [:call, nil, :c, [:arglist]], [:call, nil, :d, [:arglist]]]]
  end

  parse "a, b, *c = 1, 2, *[3, 4]" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
     [:array, [:lit, 1], [:lit, 2], [:lit, 3], [:lit, 4]]]
  end

  parse "a.b, a.c, _ = q" do
    [:masgn,
     [:array,
      [:attrasgn, [:call, nil, :a, [:arglist]], :b=, [:arglist]],
      [:attrasgn, [:call, nil, :a, [:arglist]], :c=, [:arglist]],
      [:lasgn, :_]],
     [:call, nil, :q, [:arglist]]]
  end

  parse <<-ruby do
      a, i, j = [], 1, 2
      a[i], a[j] = a[j], a[i]
    ruby

    [:block,
     [:masgn,
      [:array, [:lasgn, :a], [:lasgn, :i], [:lasgn, :j]],
      [:array, [:array], [:lit, 1], [:lit, 2]]],
     [:masgn,
      [:array,
       [:attrasgn, [:lvar, :a], :[]=, [:arglist, [:lvar, :i]]],
       [:attrasgn, [:lvar, :a], :[]=, [:arglist, [:lvar, :j]]]],
      [:array,
       [:call, [:lvar, :a], :[], [:arglist, [:lvar, :j]]],
       [:call, [:lvar, :a], :[], [:arglist, [:lvar, :i]]]]]]
  end

  parse <<-ruby do
      c, d, e, f = [], 1, 2, 3
      a, *b = c[d] = f(e, f, c)
    ruby

    [:block,
     [:masgn,
      [:array, [:lasgn, :c], [:lasgn, :d], [:lasgn, :e], [:lasgn, :f]],
      [:array, [:array], [:lit, 1], [:lit, 2], [:lit, 3]]],
     [:masgn,
      [:array, [:lasgn, :a], [:splat, [:lasgn, :b]]],
      [:attrasgn,
       [:lvar, :c],
       :[]=,
       [:arglist,
        [:lvar, :d],
        [:call, nil, :f, [:arglist, [:lvar, :e], [:lvar, :f], [:lvar, :c]]]]]]]
  end

  parse "a, b.c = d, e" do
    [:masgn,
     [:array,
      [:lasgn, :a],
      [:attrasgn, [:call, nil, :b, [:arglist]], :c=, [:arglist]]],
     [:array, [:call, nil, :d, [:arglist]], [:call, nil, :e, [:arglist]]]]
  end

  parse "*a.m = *b" do
    [:masgn,
     [:array,
      [:splat, [:attrasgn, [:call, nil, :a, [:arglist]], :m=, [:arglist]]]],
     [:splat, [:call, nil, :b, [:arglist]]]]
  end

  parse "*a.m = b" do
    [:masgn,
     [:array,
      [:splat, [:attrasgn, [:call, nil, :a, [:arglist]], :m=, [:arglist]]]],
     [:call, nil, :b, [:arglist]]]
  end

  parse "A, B, C = 1, 2, 3" do
    [:masgn,
     [:array, [:cdecl, :A], [:cdecl, :B], [:cdecl, :C]],
     [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
  end

  parse "* = 1, 2" do
    [:masgn, [:array, [:splat]], [:array, [:lit, 1], [:lit, 2]]]
  end

  parse "*$a = b" do
    [:masgn, [:array, [:splat, [:gasgn, :$a]]], [:call, nil, :b, [:arglist]]]
  end

  parse "*$a = *b" do
    [:masgn,
     [:array, [:splat, [:gasgn, :$a]]],
     [:splat, [:call, nil, :b, [:arglist]]]]
  end

  parse "a, @b = c, d" do
    [:masgn,
     [:array, [:lasgn, :a], [:iasgn, :@b]],
     [:array, [:call, nil, :c, [:arglist]], [:call, nil, :d, [:arglist]]]]
  end

  parse "*@a = b" do
    [:masgn, [:array, [:splat, [:iasgn, :@a]]], [:call, nil, :b, [:arglist]]]
  end

  parse "*@a = *b" do
    [:masgn,
     [:array, [:splat, [:iasgn, :@a]]],
     [:splat, [:call, nil, :b, [:arglist]]]]
  end

  parse "@a, $b = 1, 2" do
    [:masgn,
     [:array, [:iasgn, :@a], [:gasgn, :$b]],
     [:array, [:lit, 1], [:lit, 2]]]
  end

  parse "a, b = (@a = 1), @a" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b]],
     [:array, [:iasgn, :@a, [:lit, 1]], [:ivar, :@a]]]
  end

  parse "@@a, @@b = 1, 2" do
    [:masgn,
     [:array, [:cvasgn, :@@a], [:cvasgn, :@@b]],
     [:array, [:lit, 1], [:lit, 2]]]
  end

  parse "a, b, *c = 1, 2, 3" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
     [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
  end

  parse "a, b, *c = 1, 2" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
     [:array, [:lit, 1], [:lit, 2]]]
  end

  parse "a, b, c, *d = 1, 2" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:lasgn, :c], [:splat, [:lasgn, :d]]],
     [:array, [:lit, 1], [:lit, 2]]]
  end

  parse "a, b, c = *d" do
    [:masgn,
      [:array, [:lasgn, :a], [:lasgn, :b], [:lasgn, :c]],
      [:splat, [:call, nil, :d, [:arglist]]]]
  end

  parse "a, b, c = 1, *d" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:lasgn, :c]],
     [:argscat, [:array, [:lit, 1]], [:call, nil, :d, [:arglist]]]]
  end

  parse "a, b, *c = *d" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
     [:splat, [:call, nil, :d, [:arglist]]]]
  end

  parse "*a = 1, 2, 3" do
    [:masgn,
     [:array, [:splat, [:lasgn, :a]]],
     [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
  end

  parse "*a = b" do
    [:masgn, [:array, [:splat, [:lasgn, :a]]], [:call, nil, :b, [:arglist]]]
  end

  parse "*a = *b" do
    [:masgn,
     [:array, [:splat, [:lasgn, :a]]],
     [:splat, [:call, nil, :b, [:arglist]]]]
  end

  parse "a, (b, c) = [1, [2, 3]]" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]]],
     [:array, [:lit, 1], [:array, [:lit, 2], [:lit, 3]]]]
  end

  parse "a, = *[[[1]]]" do
    [:masgn,
     [:array, [:lasgn, :a]],
     [:splat, [:array, [:array, [:array, [:lit, 1]]]]]]
  end

  parse "a, b, * = c" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:splat]],
     [:call, nil, :c, [:arglist]]]
  end

  parse "a, b, = c" do
    [:masgn, [:array, [:lasgn, :a], [:lasgn, :b]], [:call, nil, :c, [:arglist]]]
  end

  parse "a, b, c = m d" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:lasgn, :c]],
     [:call, nil, :m, [:arglist, [:call, nil, :d, [:arglist]]]]]
  end

  parse "a, b, *c = d, e, f, g" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
     [:array,
      [:call, nil, :d, [:arglist]],
      [:call, nil, :e, [:arglist]],
      [:call, nil, :f, [:arglist]],
      [:call, nil, :g, [:arglist]]]]
  end

  parse "a, b, *c = d.e(\"f\")" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
     [:call, [:call, nil, :d, [:arglist]], :e, [:arglist, [:str, "f"]]]]
  end

  parse "a, b, *c = d" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
     [:call, nil, :d, [:arglist]]]
  end

  parse "a, b = c" do
    [:masgn,
     [:array, [:lasgn, :a], [:lasgn, :b]],
     [:call, nil, :c, [:arglist]]]
  end

  parse <<-ruby do
      m do
        a, b = 1, 2
        next
      end
    ruby

    [:call,
     nil,
     :m,
     [:arglist,
      [:iter,
       [:args],
       [:block,
        [:masgn,
         [:array, [:lasgn, :a], [:lasgn, :b]],
         [:array, [:lit, 1], [:lit, 2]]],
        [:next]]]]]
  end

  parse "a, (b, c) = 1" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]]],
     [:lit, 1]]
  end

  parse "a, (b, c) = *1" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]]],
     [:splat, [:lit, 1]]]
  end

  parse "a, (b, c) = 1, 2, 3" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]]],
     [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
  end

  parse "a, (b, *c), d = 1, 2, 3, 4" do
    [:masgn,
     [:array,
      [:lasgn, :a],
      [:masgn, [:array, [:lasgn, :b], [:splat, [:lasgn, :c]]]],
      [:lasgn, :d]],
     [:array, [:lit, 1], [:lit, 2], [:lit, 3], [:lit, 4]]]
  end

  parse "a, (b, c) = 1, *2" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]]],
     [:argscat, [:array, [:lit, 1]], [:lit, 2]]]
  end

  parse "a, (b, *c) = 1" do
    [:masgn,
     [:array,
      [:lasgn, :a],
      [:masgn, [:array, [:lasgn, :b], [:splat, [:lasgn, :c]]]]],
     [:lit, 1]]
  end

  parse "a, (b, *c) = 1, 2" do
    [:masgn,
     [:array,
      [:lasgn, :a],
      [:masgn, [:array, [:lasgn, :b], [:splat, [:lasgn, :c]]]]],
     [:array, [:lit, 1], [:lit, 2]]]
  end

  parse "a, (b, *c) = *1" do
    [:masgn,
     [:array,
      [:lasgn, :a],
      [:masgn, [:array, [:lasgn, :b], [:splat, [:lasgn, :c]]]]],
     [:splat, [:lit, 1]]]
  end

  parse "a, (b, *c) = 1, *2" do
    [:masgn,
     [:array,
      [:lasgn, :a],
      [:masgn, [:array, [:lasgn, :b], [:splat, [:lasgn, :c]]]]],
     [:argscat, [:array, [:lit, 1]], [:lit, 2]]]
  end

  parse "a, (*b) = 1" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:splat, [:lasgn, :b]]]]],
     [:lit, 1]]
  end

  parse "a, (*b) = 1, 2" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:splat, [:lasgn, :b]]]]],
     [:array, [:lit, 1], [:lit, 2]]]
  end

  parse "a, (*b) = *1" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:splat, [:lasgn, :b]]]]],
     [:splat, [:lit, 1]]]
  end

  parse "a, (*b) = 1, *2" do
    [:masgn,
     [:array, [:lasgn, :a], [:masgn, [:array, [:splat, [:lasgn, :b]]]]],
     [:argscat, [:array, [:lit, 1]], [:lit, 2]]]
  end
end
