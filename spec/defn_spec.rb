describe "A Defn node" do
  parse <<-ruby do
      def m
      end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m() end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a) end
    ruby

    [:defn, :m, [:args, :a], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1) end
    ruby

    [:defn,
      :m,
      [:args, :a, [:block, [:lasgn, :a, [:lit, 1]]]],
      [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*) end
    ruby

    [:defn, :m, [:args, :*], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a) end
    ruby

    [:defn, :m, [:args, :"*a"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(**) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(**k) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(&b) end
    ruby

    [:defn, :m, [:args, :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, b) end
    ruby

    [:defn, :m, [:args, :a, :b], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, b=1) end
    ruby

    [:defn,
     :m,
     [:args, :a, :b, [:block, [:lasgn, :b, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, *) end
    ruby

    [:defn, :m, [:args, :a, :*], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, *b) end
    ruby

    [:defn, :m, [:args, :a, :"*b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, b:) end
    ruby

    [:defn, :m, [:args, :a], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, b: 1) end
    ruby

    [:defn, :m, [:args, :a], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, **) end
    ruby

    [:defn, :m, [:args, :a], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, **k) end
    ruby

    [:defn, :m, [:args, :a], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, &b) end
    ruby

    [:defn, :m, [:args, :a, :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, b) end
    ruby

    [:defn,
     :m,
     [:args, :a, :b, [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, *) end
    ruby

    [:defn,
     :m,
     [:args, :a, :*, [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, *b) end
    ruby

    [:defn,
     :m,
     [:args, :a, :"*b", [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, b:) end
    ruby

    [:defn,
     :m,
     [:args, :a, [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, b: 2) end
    ruby

    [:defn,
     :m,
     [:args, :a, [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, **) end
    ruby

    [:defn,
     :m,
     [:args, :a, [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, **k) end
    ruby

    [:defn,
     :m,
     [:args, :a, [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, &b) end
    ruby

    [:defn,
     :m,
     [:args, :a, :"&b", [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, a) end
    ruby

    [:defn, :m, [:args, :*, :a], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, b) end
    ruby

    [:defn, :m, [:args, :"*a", :b], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, a:) end
    ruby

    [:defn, :m, [:args, :*], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, b:) end
    ruby

    [:defn, :m, [:args, :"*a"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, a: 1) end
    ruby

    [:defn, :m, [:args, :*], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, b: 1) end
    ruby

    [:defn, :m, [:args, :"*a"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, **) end
    ruby

    [:defn, :m, [:args, :*], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, **) end
    ruby

    [:defn, :m, [:args, :"*a"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, **k) end
    ruby

    [:defn, :m, [:args, :*], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, **k) end
    ruby

    [:defn, :m, [:args, :"*a"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, &b) end
    ruby

    [:defn, :m, [:args, :*, :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, &b) end
    ruby

    [:defn, :m, [:args, :"*a", :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, b:) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, b: 1) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, **) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, **k) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, &b) end
    ruby

    [:defn, :m, [:args, :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, b:) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, b: 2) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, **) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, **k) end
    ruby

    [:defn, :m, [:args], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, &b) end
    ruby

    [:defn, :m, [:args, :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(**, &b) end
    ruby

    [:defn, :m, [:args, :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(**k, &b) end
    ruby

    [:defn, :m, [:args, :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, b=1, *c, d, e:, f: 2, g:, **k, &l) end
    ruby

    [:defn,
     :m,
     [:args, :a, :b, :"*c", :d, :"&l", [:block, [:lasgn, :b, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m a, b=1, *c, d, e:, f: 2, g:, **k, &l
      end
    ruby

    [:defn,
     :m,
     [:args, :a, :b, :"*c", :d, :"&l", [:block, [:lasgn, :b, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end
end
