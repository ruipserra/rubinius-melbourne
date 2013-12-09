describe "An Lasgn node" do
  relates "a = 1" do
    parse do
      [:lasgn, :a, [:lit, 1]]
    end
  end

  relates "a = b, c, *d" do
    parse do
      [:lasgn,
         :a,
         [:svalue,
          [:array,
           [:call, nil, :b, [:arglist]],
           [:call, nil, :c, [:arglist]],
           [:splat, [:call, nil, :d, [:arglist]]]]]]
    end
  end

  relates "a = [b, *c]" do
    parse do
      [:lasgn,
         :a,
         [:array,
          [:call, nil, :b, [:arglist]],
          [:splat, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      x = (y = 1
           (y + 2))
    ruby

    parse do
      [:lasgn,
         :x,
         [:block,
          [:lasgn, :y, [:lit, 1]],
          [:call, [:lvar, :y], :+, [:arglist, [:lit, 2]]]]]
    end
  end

  relates <<-ruby do
      a = []
      a [42]
    ruby

    parse do
      [:block,
       [:lasgn, :a, [:array]],
       [:call, [:lvar, :a], :[], [:arglist, [:lit, 42]]]]
    end

    # call index space
  end

  relates 'var = ["foo", "bar"]' do
    parse do
      [:lasgn, :var, [:array, [:str, "foo"], [:str, "bar"]]]
    end
  end

  relates "c = (2 + 3)" do
    parse do
      [:lasgn, :c, [:call, [:lit, 2], :+, [:arglist, [:lit, 3]]]]
    end
  end

  relates "a = *[1]" do
    parse do
      [:lasgn, :a, [:svalue, [:splat, [:array, [:lit, 1]]]]]
    end
  end

  relates "a = *b" do
    parse do
      [:lasgn, :a, [:svalue, [:splat, [:call, nil, :b, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      a = if c
            begin
              b
            rescue
              nil
            end
          end
      a
    ruby

    parse do
      [:block,
       [:lasgn,
        :a,
        [:if,
         [:call, nil, :c, [:arglist]],
         [:rescue, [:call, nil, :b, [:arglist]], [:resbody, [:array], [:nil]]],
         nil]],
       [:lvar, :a]]
    end
  end

  relates "x = [*[1]]" do
    parse do
      [:lasgn, :x, [:array, [:splat, [:array, [:lit, 1]]]]]
    end
  end

  relates "a = []" do
    parse do
      [:lasgn, :a, [:array]]
    end
  end

  relates <<-ruby do
      a = 12
      a
    ruby

    parse do
      [:block, [:lasgn, :a, [:lit, 12]], [:lvar, :a]]
    end
  end

  relates <<-ruby do
      name
      name = 3
      name
    ruby

    parse do
      [:block,
       [:call, nil, :name, [:arglist]],
       [:lasgn, :name, [:lit, 3]],
       [:lvar, :name]]
    end
  end

  relates "a=12; b=13; true" do
    parse do
      [:block, [:lasgn, :a, [:lit, 12]], [:lasgn, :b, [:lit, 13]], [:true]]
    end
  end

  relates <<-ruby do
      def f
        a = 1
      end
    ruby

    parse do
      [:defn, :f, [:args], [:scope, [:block, [:lasgn, :a, [:lit, 1]]]]]
    end
  end

  relates <<-ruby do
      def f(a)
        a = 1
      end
    ruby

    parse do
      [:defn, :f, [:args, :a], [:scope, [:block, [:lasgn, :a, [:lit, 1]]]]]
    end
  end

  relates <<-ruby do
      def f
        b { a = 1 }
      end
    ruby

    parse do
      [:defn,
       :f,
       [:args],
       [:scope,
        [:block,
         [:iter, [:call, nil, :b, [:arglist]], nil, [:lasgn, :a, [:lit, 1]]]]]]
    end
  end

  relates <<-ruby do
      def f(a)
        b { a = 2 }
      end
    ruby

    parse do
      [:defn,
       :f,
       [:args, :a],
       [:scope,
        [:block,
         [:iter, [:call, nil, :b, [:arglist]], nil, [:lasgn, :a, [:lit, 2]]]]]]
    end
  end

  relates <<-ruby do
      def f
        a = 1
        b { a = 2 }
      end
    ruby

    parse do
      [:defn,
       :f,
       [:args],
       [:scope,
        [:block,
         [:lasgn, :a, [:lit, 1]],
         [:iter, [:call, nil, :b, [:arglist]], nil, [:lasgn, :a, [:lit, 2]]]]]]
    end
  end

  relates <<-ruby do
      def f
        a
        b { a = 1 }
      end
    ruby

    parse do
      [:defn,
       :f,
       [:args],
       [:scope,
        [:block,
         [:call, nil, :a, [:arglist]],
         [:iter, [:call, nil, :b, [:arglist]], nil, [:lasgn, :a, [:lit, 1]]]]]]
    end
  end

  relates <<-ruby do
      def f
        b { a = 1 }
        a
      end
    ruby

    parse do
      [:defn,
       :f,
       [:args],
       [:scope,
        [:block,
         [:iter, [:call, nil, :b, [:arglist]], nil, [:lasgn, :a, [:lit, 1]]],
         [:call, nil, :a, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      def f
        a = 1
        b { a = 2 }
        a
      end
    ruby

    parse do
      [:defn,
       :f,
       [:args],
       [:scope,
        [:block,
         [:lasgn, :a, [:lit, 1]],
         [:iter, [:call, nil, :b, [:arglist]], nil, [:lasgn, :a, [:lit, 2]]],
         [:lvar, :a]]]]
    end
  end

  relates <<-ruby do
      class F
        a = 1
      end
    ruby

    parse do
      [:class, :F, nil, [:scope, [:lasgn, :a, [:lit, 1]]]]
    end
  end

  relates <<-ruby do
      a = Object
      class a::F
        b = 1
      end
    ruby

    parse do
      [:block,
       [:lasgn, :a, [:const, :Object]],
       [:class, [:colon2, [:lvar, :a], :F], nil, [:scope, [:lasgn, :b, [:lit, 1]]]]]
    end
  end

  relates <<-ruby do
      a = Object
      class F < a
        b = 1
      end
    ruby

    parse do
      [:block,
       [:lasgn, :a, [:const, :Object]],
       [:class, :F, [:lvar, :a], [:scope, [:lasgn, :b, [:lit, 1]]]]]
    end
  end

  relates <<-ruby do
      class F
        a = 1
        def f
          a = 1
        end
      end
    ruby

    parse do
      [:class,
       :F,
       nil,
       [:scope,
        [:block,
         [:lasgn, :a, [:lit, 1]],
         [:defn, :f, [:args], [:scope, [:block, [:lasgn, :a, [:lit, 1]]]]]]]]
    end
  end

  relates <<-ruby do
      module M
        a = 1
      end
    ruby

    parse do
      [:module, :M, [:scope, [:lasgn, :a, [:lit, 1]]]]
    end
  end

  relates <<-ruby do
      module M
        a = 1
        def f
          a = 1
        end
      end
    ruby

    parse do
      [:module,
       :M,
       [:scope,
        [:block,
         [:lasgn, :a, [:lit, 1]],
         [:defn, :f, [:args], [:scope, [:block, [:lasgn, :a, [:lit, 1]]]]]]]]
    end
  end

  relates <<-ruby do
      a = Object
      module a::M
        b = 1
      end
    ruby

    parse do
      [:block,
       [:lasgn, :a, [:const, :Object]],
       [:module, [:colon2, [:lvar, :a], :M], [:scope, [:lasgn, :b, [:lit, 1]]]]]
    end
  end
end
