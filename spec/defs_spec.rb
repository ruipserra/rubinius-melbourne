describe "A Defs node" do
  relates <<-ruby do
      def self.x(y)
        (y + 1)
      end
    ruby

    parse do
      [:defs,
         [:self],
         :x,
         [:args, :y],
         [:scope, [:block, [:call, [:lvar, :y], :+, [:arglist, [:lit, 1]]]]]]
    end
  end

  relates <<-ruby do
      def self.setup(ctx)
        bind = allocate
        bind.context = ctx
        return bind
      end
    ruby

    parse do
      [:defs,
         [:self],
         :setup,
         [:args, :ctx],
         [:scope,
          [:block,
           [:lasgn, :bind, [:call, nil, :allocate, [:arglist]]],
           [:attrasgn, [:lvar, :bind], :context=, [:arglist, [:lvar, :ctx]]],
           [:return, [:lvar, :bind]]]]]
    end
  end

  relates <<-ruby do
      def self.empty(*)
      end
    ruby

    parse do
      [:defs, [:self], :empty, [:args, :*], [:scope, [:block]]]
    end
  end

  relates <<-ruby do
      def self.empty
      end
    ruby

    parse do
      [:defs, [:self], :empty, [:args], [:scope, [:block]]]
    end
  end

  relates <<-ruby do
      def (a.b).empty(*)
      end
    ruby

    parse do
      [:defs,
       [:call, [:call, nil, :a, [:arglist]], :b, [:arglist]],
       :empty,
       [:args, :*],
       [:scope, [:block]]]
    end
  end

  relates <<-ruby do
    x = "a"
    def x.m(a)
      a
    end
    ruby

    # TODO
  end
end
