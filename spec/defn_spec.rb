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
      def m((a)) end
    ruby

    [:defn,
     :m,
     [:args, [:masgn, [:array, [:lasgn, :a]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m((*a, b)) end
    ruby

    [:defn,
     :m,
     [:args, [:masgn, [:array, [:splat, :a], [:lasgn, :b]]]],
     [:scope, [:block, [:nil]]]]
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

    [:defn, :m, [:args, :a, [:block, [:a], []]], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1) end
    ruby

    [:defn,
     :m,
     [:args, :a, [:block, [:a], [[:lasgn, :a, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(**) end
    ruby

    [:defn, :m, [:args, :**], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(**k) end
    ruby

    [:defn, :m, [:args, :"**k"], [:scope, [:block, [:nil]]]]
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
      def m(a, (b, c)) end
    ruby

    [:defn,
     :m,
     [:args, :a, [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m((a), (b)) end
    ruby

    [:defn,
     :m,
     [:args, [:masgn, [:array, [:lasgn, :a]]], [:masgn, [:array, [:lasgn, :b]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m((*), (*)) end
    ruby

    [:defn,
     :m,
     [:args, [:masgn, [:array, [:splat, :*]]], [:masgn, [:array, [:splat, :*]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m((*a), (*c)) end
    ruby

    [:defn,
     :m,
     [:args, [:masgn, [:array, [:splat, :a]]], [:masgn, [:array, [:splat, :c]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m((a, b), (c, d)) end
    ruby

    [:defn,
     :m,
     [:args,
      [:masgn, [:array, [:lasgn, :a], [:lasgn, :b]]],
      [:masgn, [:array, [:lasgn, :c], [:lasgn, :d]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m((a, *b), (*c, d)) end
    ruby

    [:defn,
     :m,
     [:args,
      [:masgn, [:array, [:lasgn, :a], [:splat, :b]]],
      [:masgn, [:array, [:splat, :c], [:lasgn, :d]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m((a, b, *c, d), (*e, f, g), (*h)) end
    ruby

    [:defn,
     :m,
     [:args,
      [:masgn, [:array, [:lasgn, :a], [:lasgn, :b], [:splat, :c], [:lasgn, :d]]],
      [:masgn, [:array, [:splat, :e], [:lasgn, :g], [:lasgn, :f]]],
      [:masgn, [:array, [:splat, :h]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, (b, (c, *d), *e)) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn,
       [:array,
        [:lasgn, :b],
        [:masgn, [:array, [:lasgn, :c], [:splat, :d]]],
        [:splat, :e]]]],
     [:scope, [:block, [:nil]]]]
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

    [:defn, :m, [:args, :a, :b, [:block, [:b], []]], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, b: 1) end
    ruby

    [:defn,
     :m,
     [:args, :a, :b, [:block, [:b], [[:lasgn, :b, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, **) end
    ruby

    [:defn, :m, [:args, :a, :**], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, **k) end
    ruby

    [:defn, :m, [:args, :a, :"**k"], [:scope, [:block, [:nil]]]]
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
      def m(a=1, (b, c)) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]],
      [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, (b, (c, *d))) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn,
       [:array, [:lasgn, :b], [:masgn, [:array, [:lasgn, :c], [:splat, :d]]]]],
      [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, (b, (c, *d), *e)) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn,
       [:array,
        [:lasgn, :b],
        [:masgn, [:array, [:lasgn, :c], [:splat, :d]]],
        [:splat, :e]]],
      [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, (b), (c)) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn, [:array, [:lasgn, :b]]],
      [:masgn, [:array, [:lasgn, :c]]],
      [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, (*b), (*c)) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn, [:array, [:splat, :b]]],
      [:masgn, [:array, [:splat, :c]]],
      [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, (b, c), (d, e)) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn, [:array, [:lasgn, :b], [:lasgn, :c]]],
      [:masgn, [:array, [:lasgn, :d], [:lasgn, :e]]],
      [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, (b, *c), (*d, e)) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn, [:array, [:lasgn, :b], [:splat, :c]]],
      [:masgn, [:array, [:splat, :d], [:lasgn, :e]]],
      [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, (b, *c), (d, (*e, f))) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      [:masgn, [:array, [:lasgn, :b], [:splat, :c]]],
      [:masgn,
       [:array, [:lasgn, :d], [:masgn, [:array, [:splat, :e], [:lasgn, :f]]]]],
      [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, b:) end
    ruby

    [:defn,
     :m,
     [:args, :a, :b, [:block, [:lasgn, :a, [:lit, 1]]], [:block, [:b], []]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, b: 2) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      :b,
      [:block, [:lasgn, :a, [:lit, 1]]],
      [:block, [:b], [[:lasgn, :b, [:lit, 2]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, **) end
    ruby

    [:defn,
     :m,
     [:args, :a, :**, [:block, [:lasgn, :a, [:lit, 1]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a=1, **k) end
    ruby

    [:defn,
     :m,
     [:args, :a, :"**k", [:block, [:lasgn, :a, [:lit, 1]]]],
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

    [:defn, :m, [:args, :*, :a, [:block, [:a], []]], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, b:) end
    ruby

    [:defn,
      :m,
      [:args, :"*a", :b, [:block, [:b], []]], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, a: 1) end
    ruby

    [:defn,
     :m,
     [:args, :*, :a, [:block, [:a], [[:lasgn, :a, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, b: 1) end
    ruby

    [:defn,
     :m,
     [:args, :"*a", :b, [:block, [:b], [[:lasgn, :b, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, **) end
    ruby

    [:defn, :m, [:args, :*, :**], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, **) end
    ruby

    [:defn, :m, [:args, :"*a", :**], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*, **k) end
    ruby

    [:defn, :m, [:args, :*, :"**k"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(*a, **k) end
    ruby

    [:defn, :m, [:args, :"*a", :"**k"], [:scope, [:block, [:nil]]]]
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

    [:defn,
     :m,
     [:args, :a, :b, [:block, [:a, :b], []]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, b: 1) end
    ruby

    [:defn,
     :m,
     [:args, :a, :b, [:block, [:a, :b], [[:lasgn, :b, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, **) end
    ruby

    [:defn,
      :m,
      [:args, :a, :**, [:block, [:a], []]], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, **k) end
    ruby

    [:defn,
     :m,
     [:args, :a, :"**k", [:block, [:a], []]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a:, &b) end
    ruby

    [:defn,
     :m,
     [:args, :a, :"&b", [:block, [:a], []]], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, b:) end
    ruby

    [:defn,
     :m,
     [:args, :a, :b, [:block, [:a, :b], [[:lasgn, :a, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: def m(a: 1) a end, b:) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      :b,
      [:block,
       [:a, :b],
       [[:lasgn,
         :a,
         [:defn,
          :m,
          [:args, :a, [:block, [:a], [[:lasgn, :a, [:lit, 1]]]]],
          [:scope, [:block, [:lvar, :a]]]]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, b: 2) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      :b,
      [:block, [:a, :b], [[:lasgn, :a, [:lit, 1]], [:lasgn, :b, [:lit, 2]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, **) end
    ruby

    [:defn,
     :m,
     [:args, :a, :**, [:block, [:a], [[:lasgn, :a, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, **k) end
    ruby

    [:defn,
     :m,
     [:args, :a, :"**k", [:block, [:a], [[:lasgn, :a, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a: 1, &b) end
    ruby

    [:defn,
     :m,
     [:args, :a, :"&b", [:block, [:a], [[:lasgn, :a, [:lit, 1]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(**, &b) end
    ruby

    [:defn, :m, [:args, :**, :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(**k, &b) end
    ruby

    [:defn, :m, [:args, :"**k", :"&b"], [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m(a, b=1, *c, d, e:, f: 2, g:, **k, &l) end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      :b,
      :"*c",
      :d,
      :e,
      :f,
      :g,
      :"**k",
      :"&l",
      [:block, [:lasgn, :b, [:lit, 1]]],
      [:block, [:e, :f, :g], [[:lasgn, :f, [:lit, 2]]]]],
     [:scope, [:block, [:nil]]]]
  end

  parse <<-ruby do
      def m a, b=1, *c, d, e:, f: 2, g:, **k, &l
      end
    ruby

    [:defn,
     :m,
     [:args,
      :a,
      :b,
      :"*c",
      :d,
      :e,
      :f,
      :g,
      :"**k",
      :"&l",
      [:block, [:lasgn, :b, [:lit, 1]]],
      [:block, [:e, :f, :g], [[:lasgn, :f, [:lit, 2]]]]],
     [:scope, [:block, [:nil]]]]
  end
end
