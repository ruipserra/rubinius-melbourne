describe "A Masgn node" do
  relates "a, b.c = b.c, true" do
    parse do
      [:masgn,
       [:array,
        [:lasgn, :a],
        [:attrasgn, [:call, nil, :b, [:arglist]], :c=, [:arglist]]],
       [:array, [:call, [:call, nil, :b, [:arglist]], :c, [:arglist]], [:true]]]
    end
  end

  relates "a, b = 1, 2, 3" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b]],
       [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
    end
  end

  relates "a, b = c, d" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b]],
       [:array, [:call, nil, :c, [:arglist]], [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "a, b, *c = 1, 2, *[3, 4]" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
       [:array, [:lit, 1], [:lit, 2], [:lit, 3], [:lit, 4]]]
    end
  end

  relates "a.b, a.c, _ = q" do
    parse do
      [:masgn,
       [:array,
        [:attrasgn, [:call, nil, :a, [:arglist]], :b=, [:arglist]],
        [:attrasgn, [:call, nil, :a, [:arglist]], :c=, [:arglist]],
        [:lasgn, :_]],
       [:to_ary, [:call, nil, :q, [:arglist]]]]
    end
  end

  relates <<-ruby do
      a, i, j = [], 1, 2
      a[i], a[j] = a[j], a[i]
    ruby

    parse do
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
  end

  relates <<-ruby do
      c, d, e, f = [], 1, 2, 3
      a, *b = c[d] = f(e, f, c)
    ruby

    parse do
      [:block,
       [:masgn,
        [:array, [:lasgn, :c], [:lasgn, :d], [:lasgn, :e], [:lasgn, :f]],
        [:array, [:array], [:lit, 1], [:lit, 2], [:lit, 3]]],
       [:masgn,
        [:array, [:lasgn, :a], [:splat, [:lasgn, :b]]],
        [:to_ary,
         [:attrasgn,
          [:lvar, :c],
          :[]=,
          [:arglist,
           [:lvar, :d],
           [:call, nil, :f, [:arglist, [:lvar, :e], [:lvar, :f], [:lvar, :c]]]]]]]]
    end
  end

  relates "a, b.c = d, e" do
    parse do
      [:masgn,
       [:array,
        [:lasgn, :a],
        [:attrasgn, [:call, nil, :b, [:arglist]], :c=, [:arglist]]],
       [:array, [:call, nil, :d, [:arglist]], [:call, nil, :e, [:arglist]]]]
    end
  end

  relates "*a.m = *b" do
    parse do
      [:masgn,
       [:array,
        [:splat, [:attrasgn, [:call, nil, :a, [:arglist]], :m=, [:arglist]]]],
       [:splat, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "*a.m = b" do
    parse do
      [:masgn,
       [:array,
        [:splat, [:attrasgn, [:call, nil, :a, [:arglist]], :m=, [:arglist]]]],
       [:array, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "A, B, C = 1, 2, 3" do
    parse do
      [:masgn,
       [:array, [:cdecl, :A], [:cdecl, :B], [:cdecl, :C]],
       [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
    end
  end

  relates "* = 1, 2" do
    parse do
      [:masgn, [:array, [:splat]], [:array, [:lit, 1], [:lit, 2]]]
    end
  end

  relates "*$a = b" do
    parse do
      [:masgn,
       [:array, [:splat, [:gasgn, :$a]]],
       [:array, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "*$a = *b" do
    parse do
      [:masgn,
       [:array, [:splat, [:gasgn, :$a]]],
       [:splat, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "a, @b = c, d" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:iasgn, :@b]],
       [:array, [:call, nil, :c, [:arglist]], [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "*@a = b" do
    parse do
      [:masgn,
       [:array, [:splat, [:iasgn, :@a]]],
       [:array, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "*@a = *b" do
    parse do
      [:masgn,
       [:array, [:splat, [:iasgn, :@a]]],
       [:splat, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "@a, $b = 1, 2" do
    parse do
      [:masgn,
       [:array, [:iasgn, :@a], [:gasgn, :$b]],
       [:array, [:lit, 1], [:lit, 2]]]
    end
  end

  relates "a, b = (@a = 1), @a" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b]],
       [:array, [:iasgn, :@a, [:lit, 1]], [:ivar, :@a]]]
    end
  end

  relates "@@a, @@b = 1, 2" do
    parse do
      [:masgn,
       [:array, [:cvasgn, :@@a], [:cvasgn, :@@b]],
       [:array, [:lit, 1], [:lit, 2]]]
    end
  end

  relates "a, b, *c = 1, 2, 3" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
       [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
    end
  end

  relates "a, b, *c = 1, 2" do
    # TODO
  end

  relates "a, b, c, *d = 1, 2" do
    # TODO
  end

  relates "a, b, c = *d" do
    parse do
      [:masgn,
        [:array, [:lasgn, :a], [:lasgn, :b], [:lasgn, :c]],
        [:splat, [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "a, b, c = 1, *d" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:lasgn, :c]],
       [:argscat, [:array, [:lit, 1]], [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "a, b, *c = *d" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
       [:splat, [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "*a = 1, 2, 3" do
    parse do
      [:masgn,
       [:array, [:splat, [:lasgn, :a]]],
       [:array, [:lit, 1], [:lit, 2], [:lit, 3]]]
    end
  end

  relates "*a = b" do
    parse do
      [:masgn,
       [:array, [:splat, [:lasgn, :a]]],
       [:array, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "*a = *b" do
    parse do
      [:masgn,
       [:array, [:splat, [:lasgn, :a]]],
       [:splat, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "a, (b, c) = [1, [2, 3]]" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]]],
       [:to_ary, [:array, [:lit, 1], [:array, [:lit, 2], [:lit, 3]]]]]
    end
  end

  relates "a, = *[[[1]]]" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a]],
       [:splat, [:array, [:array, [:array, [:lit, 1]]]]]]
    end
  end

  relates "a, b, * = c" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:splat]],
       [:to_ary, [:call, nil, :c, [:arglist]]]]
    end
  end

  relates "a, b, = c" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b]],
       [:to_ary, [:call, nil, :c, [:arglist]]]]
    end
  end

  relates "a, b, c = m d" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:lasgn, :c]],
       [:to_ary, [:call, nil, :m, [:arglist, [:call, nil, :d, [:arglist]]]]]]
    end
  end

  relates "a, b, *c = d, e, f, g" do

    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
       [:array,
        [:call, nil, :d, [:arglist]],
        [:call, nil, :e, [:arglist]],
        [:call, nil, :f, [:arglist]],
        [:call, nil, :g, [:arglist]]]]
    end
  end

  relates "a, b, *c = d.e(\"f\")" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
       [:to_ary, [:call, [:call, nil, :d, [:arglist]], :e, [:arglist, [:str, "f"]]]]]
    end
  end

  relates "a, b, *c = d" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]],
       [:to_ary, [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "a, b = c" do
    parse do
      [:masgn,
       [:array, [:lasgn, :a], [:lasgn, :b]],
       [:to_ary, [:call, nil, :c, [:arglist]]]]
    end
  end

  relates <<-ruby do
      m do
        a, b = 1, 2
        next
      end
    ruby

    parse do
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
  end

  relates "a, (b, c) = 1" do
    # TODO
  end

  relates "a, (b, c) = *1" do
    # TODO
  end

  relates "a, (b, c) = 1, 2, 3" do
    # TODO
  end

  relates "a, (b, *c), d = 1, 2, 3, 4" do
    # TODO
  end

  relates "a, (b, c) = 1, *2" do
    # TODO
  end

  relates "a, (b, *c) = 1" do
    # TODO
  end

  relates "a, (b, *c) = 1, 2" do
    # TODO
  end

  relates "a, (b, *c) = *1" do
    # TODO
  end

  relates "a, (b, *c) = 1, *2" do
    # TODO
  end

  relates "a, (*b) = 1" do
    # TODO
  end

  relates "a, (*b) = 1, 2" do
    # TODO
  end

  relates "a, (*b) = *1" do
    # TODO
  end

  relates "a, (*b) = 1, *2" do
    # TODO
  end
end
