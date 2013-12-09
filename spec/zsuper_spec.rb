describe "A Zsuper node" do
  relates <<-ruby do
      def x
        super
      end
    ruby

    parse do
      [:defn, :x, [:args], [:scope, [:block, [:zsuper]]]]
    end
  end

  relates <<-ruby do
      def x(a)
        super
      end
    ruby

    parse do
      [:defn, :x, [:args, :a], [:scope, [:block, [:zsuper]]]]
    end
  end

  relates <<-ruby do
      def x(&block)
        super
      end
    ruby

    parse do
      [:defn, :x, [:args, :"&block"], [:scope, [:block, [:zsuper]]]]
    end
  end

  relates <<-ruby do
      def x(a, *as)
        super
      end
    ruby

    parse do
      [:defn, :x, [:args, :a, :"*as"], [:scope, [:block, [:zsuper]]]]
    end
  end
end
