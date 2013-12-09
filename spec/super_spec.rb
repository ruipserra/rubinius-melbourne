describe "A Super node" do
  relates <<-ruby do
      def x
        super()
      end
    ruby

    parse do
      [:defn, :x, [:args], [:scope, [:block, [:super]]]]
    end
  end

  relates <<-ruby do
      def x(&block)
        super(&block)
      end
    ruby

    parse do
      [:defn,
       :x,
       [:args, :"&block"],
       [:scope, [:block, [:super, [:block_pass, [:lvar, :block]]]]]]
    end
  end

  relates <<-ruby do
      def x
        super([24, 42])
      end
    ruby

    parse do
      [:defn,
       :x,
       [:args],
       [:scope, [:block, [:super, [:array, [:lit, 24], [:lit, 42]]]]]]
    end
  end

  relates <<-ruby do
      def x
        super(4)
      end
    ruby

    parse do
      [:defn, :x, [:args], [:scope, [:block, [:super, [:lit, 4]]]]]
    end
  end

  relates "super(a, &b)" do
    parse do
      [:super,
       [:call, nil, :a, [:arglist]],
       [:block_pass, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates "super(a, *b)" do
    parse do
      [:super,
        [:call, nil, :a, [:arglist]],
        [:splat, [:call, nil, :b, [:arglist]]]]
    end
  end

  relates <<-ruby do
      def x
        super(24, 42)
      end
    ruby

    parse do
      [:defn,
        :x,
        [:args],
        [:scope, [:block, [:super, [:lit, 24], [:lit, 42]]]]]
    end
  end

  relates "super([*[1]])" do
    parse do
      [:super, [:array, [:splat, [:array, [:lit, 1]]]]]
    end
  end

  relates "super(*[1])" do
    parse do
      [:super, [:splat, [:array, [:lit, 1]]]]
    end
  end
end
