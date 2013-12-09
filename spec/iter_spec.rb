describe "An Iter node" do
  relates "m { }" do
    parse do
      [:iter, [:call, nil, :m, [:arglist]], nil]
    end
  end

  relates "m do end" do
    parse do
      [:iter, [:call, nil, :m, [:arglist]], nil]
    end
  end

  relates "m { x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:call, nil, :x, [:arglist]]]
    end
  end

  relates "m { || x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       0,
       [:call, nil, :x, [:arglist]]]
    end
  end

  relates "m { |a| a + x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:lasgn, :a],
       [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates "m { |*| x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:splat]]],
       [:call, nil, :x, [:arglist]]]
    end
  end

  relates "m { |*c| x; c }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:splat, [:lasgn, :c]]]],
       [:block, [:call, nil, :x, [:arglist]], [:lvar, :c]]]
    end
  end

  relates "m { |a, | a + x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:lasgn, :a]]],
       [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates "m { |a, *| a + x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:lasgn, :a], [:splat]]],
       [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates "m { |a, *c| a + x; c }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:lasgn, :a], [:splat, [:lasgn, :c]]]],
       [:block,
        [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]],
        [:lvar, :c]]]
    end
  end

  relates "m { |a, b| a + x; b }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:lasgn, :a], [:lasgn, :b]]],
       [:block,
        [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]],
        [:lvar, :b]]]
    end
  end

  relates "m { |a, b, | a + x; b }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:lasgn, :a], [:lasgn, :b]]],
       [:block,
        [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]],
        [:lvar, :b]]]
    end
  end

  relates "m { |a, b, *| a + x; b }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:lasgn, :a], [:lasgn, :b], [:splat]]],
       [:block,
        [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]],
        [:lvar, :b]]]
    end
  end

  masgn_rest_arg_block = lambda do |g|
    g.push :self

    g.in_block_send :m, :rest, -3 do |d|
      d.push_local 0
      d.push :self
      d.send :x, 0, true
      d.send :+, 1, false
      d.pop
      d.push_local 1
      d.pop
      d.push_local 2
    end
  end

  relates "m { |a, b, *c| a + x; b; c }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]]],
       [:block,
        [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]],
        [:lvar, :b],
        [:lvar, :c]]]
    end
  end

  relates "m do |a, b, *c| a + x; b; c end" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:masgn, [:array, [:lasgn, :a], [:lasgn, :b], [:splat, [:lasgn, :c]]]],
       [:block,
        [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]],
        [:lvar, :b],
        [:lvar, :c]]]
    end
  end

  relates "m { n = 1; n }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:block, [:lasgn, :n, [:lit, 1]], [:lvar, :n]]]
    end
  end

  relates "m { n = 1; m { n } }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:block,
        [:lasgn, :n, [:lit, 1]],
        [:iter, [:call, nil, :m, [:arglist]], nil, [:lvar, :n]]]]
    end
  end

  relates "n = 1; m { n = 2 }; n" do
    parse do
      [:block,
        [:lasgn, :n, [:lit, 1]],
        [:iter, [:call, nil, :m, [:arglist]], nil, [:lasgn, :n, [:lit, 2]]],
        [:lvar, :n]]
    end
  end

  relates "m(a) { |b| a + x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist, [:call, nil, :a, [:arglist]]]],
       [:lasgn, :b],
       [:call,
        [:call, nil, :a, [:arglist]],
        :+,
        [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      m { |a|
        a + x
      }
    ruby

    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:lasgn, :a],
       [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      m do |a|
        a + x
      end
    ruby

    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       [:lasgn, :a],
       [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates "obj.m { |a| a + x }" do
    parse do
      [:iter,
       [:call, [:call, nil, :obj, [:arglist]], :m, [:arglist]],
       [:lasgn, :a],
       [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates "obj.m(x) { |a| a + x }" do
    parse do
      [:iter,
       [:call,
        [:call, nil, :obj, [:arglist]],
        :m,
        [:arglist, [:call, nil, :x, [:arglist]]]],
       [:lasgn, :a],
       [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates "obj.m(a) { |a| a + x }" do
    parse do
      [:iter,
       [:call,
        [:call, nil, :obj, [:arglist]],
        :m,
        [:arglist, [:call, nil, :a, [:arglist]]]],
       [:lasgn, :a],
       [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]
    end
  end

  relates "a = 1; m { |a| a + x }" do
    parse do
      [:block,
       [:lasgn, :a, [:lit, 1]],
       [:iter,
        [:call, nil, :m, [:arglist]],
        [:lasgn, :a],
        [:call, [:lvar, :a], :+, [:arglist, [:call, nil, :x, [:arglist]]]]]]
    end
  end

  relates <<-ruby do
      x = nil
      m do |a|
        begin
          x
        rescue Exception => x
          break
        ensure
          x = a
        end
      end
    ruby

    parse do
      [:block,
       [:lasgn, :x, [:nil]],
       [:iter,
        [:call, nil, :m, [:arglist]],
        [:lasgn, :a],
        [:ensure,
         [:rescue,
          [:lvar, :x],
          [:resbody,
           [:array, [:const, :Exception], [:lasgn, :x, [:gvar, :$!]]],
           [:break]]],
         [:lasgn, :x, [:lvar, :a]]]]]
    end
  end

  relates "m { next }" do
    parse do
      [:iter, [:call, nil, :m, [:arglist]], nil, [:next]]
    end
  end

  relates "m { next if x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:if, [:call, nil, :x, [:arglist]], [:next], nil]]
    end
  end

  relates "m { next x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:next, [:call, nil, :x, [:arglist]]]]
    end
  end

  relates "m { x = 1; next x }" do
    parse do
      [:iter,
        [:call, nil, :m, [:arglist]],
        nil,
        [:block,
          [:lasgn, :x, [:lit, 1]],
          [:next, [:lvar, :x]]]]
    end
  end

  relates "m { next [1] }" do
    parse do
      [:iter, [:call, nil, :m, [:arglist]], nil, [:next, [:array, [:lit, 1]]]]
    end
  end

  relates "m { next *[1] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:next, [:svalue, [:splat, [:array, [:lit, 1]]]]]]
    end
  end

  relates "m { next [*[1]] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:next, [:array, [:splat, [:array, [:lit, 1]]]]]]
    end
  end

  relates "m { next *[1, 2] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:next, [:svalue, [:splat, [:array, [:lit, 1], [:lit, 2]]]]]]
    end
  end

  relates "m { next [*[1, 2]] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:next, [:array, [:splat, [:array, [:lit, 1], [:lit, 2]]]]]]
    end
  end

  relates "m { break }" do
    parse do
      [:iter, [:call, nil, :m, [:arglist]], nil, [:break]]
    end
  end

  relates "m { break if x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:if, [:call, nil, :x, [:arglist]], [:break], nil]]
    end
  end

  relates "m { break x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:break, [:call, nil, :x, [:arglist]]]]
    end
  end

  relates "m { x = 1; break x }" do
    parse do
      [:iter,
        [:call, nil, :m, [:arglist]],
        nil,
        [:block,
          [:lasgn, :x, [:lit, 1]],
          [:break, [:lvar, :x]]]]
    end
  end

  relates "m { break [1] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:break, [:array, [:lit, 1]]]]
    end
  end

  relates "m { break *[1] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:break, [:svalue, [:splat, [:array, [:lit, 1]]]]]]
    end
  end

  relates "m { break [*[1]] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:break, [:array, [:splat, [:array, [:lit, 1]]]]]]
    end
  end

  relates "m { break *[1, 2] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:break, [:svalue, [:splat, [:array, [:lit, 1], [:lit, 2]]]]]]
    end
  end

  relates "m { break [*[1, 2]] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:break, [:array, [:splat, [:array, [:lit, 1], [:lit, 2]]]]]]
    end
  end

  relates "m { return }" do
    parse do
      [:iter, [:call, nil, :m, [:arglist]], nil, [:return]]
    end
  end

  relates "m { return if x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:if, [:call, nil, :x, [:arglist]], [:return], nil]]
    end
  end

  relates "m { return x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:return, [:call, nil, :x, [:arglist]]]]
    end
  end

  relates "m { x = 1; return x }" do
    parse do
      [:iter,
        [:call, nil, :m, [:arglist]],
        nil,
        [:block,
          [:lasgn, :x, [:lit, 1]],
          [:return, [:lvar, :x]]]]
    end
  end

  relates "m { return [1] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:return, [:array, [:lit, 1]]]]
    end
  end

  relates "m { return *[1] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:return, [:svalue, [:splat, [:array, [:lit, 1]]]]]]
    end
  end

  relates "m { return [*[1]] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:return, [:array, [:splat, [:array, [:lit, 1]]]]]]
    end
  end

  relates "m { return *[1, 2] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:return, [:svalue, [:splat, [:array, [:lit, 1], [:lit, 2]]]]]]
    end
  end

  relates "m { return [*[1, 2]] }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:return, [:array, [:splat, [:array, [:lit, 1], [:lit, 2]]]]]]
    end
  end

  relates "m { redo }" do
    parse do
      [:iter, [:call, nil, :m, [:arglist]], nil, [:redo]]
    end
  end

  relates "m { redo if x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist]],
       nil,
       [:if, [:call, nil, :x, [:arglist]], [:redo], nil]]
    end
  end

  relates "m(a) { retry }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist, [:call, nil, :a, [:arglist]]]],
       nil,
       [:retry]]
    end

    # TODO
  end

  relates "m(a) { retry if x }" do
    parse do
      [:iter,
       [:call, nil, :m, [:arglist, [:call, nil, :a, [:arglist]]]],
       nil,
       [:if, [:call, nil, :x, [:arglist]], [:retry], nil]]
    end

    # TODO
  end

  relates "break" do
    parse do
      [:break]
    end
  end

  relates "redo" do
    parse do
      [:redo]
    end
  end

  relates "retry" do
    parse do
      [:retry]
    end
  end

  relates "next" do
    parse do
      [:next]
    end
  end

  relates <<-ruby do
      def x(a)
        bar { super }
      end
    ruby

    parse do
      [:defn,
       :x,
       [:args, :a],
       [:scope, [:block, [:iter, [:call, nil, :bar, [:arglist]], nil, [:zsuper]]]]]
    end
  end
end
