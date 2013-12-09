describe "A Call node" do
  relates "self.method" do
    parse do
      [:call, [:self], :method, [:arglist]]
    end
  end

  relates "1.m(2)" do
    parse do
      [:call, [:lit, 1], :m, [:arglist, [:lit, 2]]]
    end
  end

  relates "h(1, 2, *a)" do
    parse do
      [:call, nil, :h,
       [:arglist,
         [:lit, 1],
         [:lit, 2],
         [:splat, [:call, nil, :a, [:arglist]]]]]
    end
  end

  relates <<-ruby do
      begin
        (1 + 1)
      end
    ruby

    parse do
      [:call, [:lit, 1], :+, [:arglist, [:lit, 1]]]
    end
  end

  relates "blah(*a)" do
    parse do
      [:call, nil, :blah,
        [:arglist, [:splat, [:call, nil, :a, [:arglist]]]]]
    end
  end

  relates "a.b(&c)" do
    parse do
      [:call,
       [:call, nil, :a, [:arglist]],
       :b,
       [:arglist, [:block_pass, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates "a.b(4, &c)" do
    parse do
      [:call,
       [:call, nil, :a, [:arglist]],
       :b,
       [:arglist, [:lit, 4], [:block_pass, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates "a.b(1, 2, 3, &c)" do
    parse do
      [:call,
       [:call, nil, :a, [:arglist]],
       :b,
       [:arglist,
        [:lit, 1],
        [:lit, 2],
        [:lit, 3],
        [:block_pass, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates "a(&b)" do
    parse do
      [:call,
       nil,
       :a,
       [:arglist, [:block_pass, [:call, nil, :b, [:arglist]]]]]
    end
  end

  relates "a(4, &b)" do
    parse do
      [:call,
       nil,
       :a,
       [:arglist, [:lit, 4], [:block_pass, [:call, nil, :b, [:arglist]]]]]
    end
  end

  relates "a(1, 2, 3, &b)" do
    parse do
      [:call,
       nil,
       :a,
       [:arglist,
        [:lit, 1],
        [:lit, 2],
        [:lit, 3],
        [:block_pass, [:call, nil, :b, [:arglist]]]]]
    end
  end

  relates "define_attr_method(:x, :sequence_name, &Proc.new { |*args| nil })" do
    parse do
      [:call,
       nil,
       :define_attr_method,
       [:arglist,
        [:lit, :x],
        [:lit, :sequence_name],
        [:block_pass,
         [:iter,
          [:call, [:const, :Proc], :new, [:arglist]],
          [:masgn, [:array, [:splat, [:lasgn, :args]]]],
          [:nil]]]]]
    end
  end

  relates "r.read_body(dest, &block)" do
    parse do
      [:call,
       [:call, nil, :r, [:arglist]],
       :read_body,
       [:arglist,
        [:call, nil, :dest, [:arglist]],
        [:block_pass, [:call, nil, :block, [:arglist]]]]]
    end
  end

  relates "o.m(:a => 1, :b => 2)" do
    parse do
      [:call,
       [:call, nil, :o, [:arglist]],
       :m,
       [:arglist, [:hash, [:lit, :a], [:lit, 1], [:lit, :b], [:lit, 2]]]]
    end
  end

  relates "o.m(42, :a => 1, :b => 2)" do
    parse do
      [:call,
       [:call, nil, :o, [:arglist]],
       :m,
       [:arglist,
        [:lit, 42],
        [:hash, [:lit, :a], [:lit, 1], [:lit, :b], [:lit, 2]]]]
    end
  end

  relates "o.m(42, :a => 1, :b => 2, *c)" do
    parse do
      [:call,
       [:call, nil, :o, [:arglist]],
       :m,
       [:arglist,
        [:lit, 42],
        [:hash, [:lit, :a], [:lit, 1], [:lit, :b], [:lit, 2]],
        [:splat, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates "a (1,2,3)" do
    parse do
      [:call, nil, :a, [:arglist, [:lit, 1], [:lit, 2], [:lit, 3]]]
    end
  end

  relates "o.puts(42)" do
    parse do
      [:call, [:call, nil, :o, [:arglist]], :puts, [:arglist, [:lit, 42]]]
    end
  end

  relates "1.b(c)" do
    parse do
      [:call, [:lit, 1], :b, [:arglist, [:call, nil, :c, [:arglist]]]]
    end
  end

  relates "(v = (1 + 1)).zero?" do
    parse do
      [:call,
       [:lasgn, :v, [:call, [:lit, 1], :+, [:arglist, [:lit, 1]]]],
       :zero?,
       [:arglist]]
    end
  end

  relates "-2**31" do
    parse do
      [:call,
       [:call, [:lit, 2], :**, [:arglist, [:lit, 31]]],
       :-@,
       [:arglist]]
    end
  end

  relates "a[]" do
    parse do
      [:call, [:call, nil, :a, [:arglist]], :[], [:arglist]]
    end
  end

  relates "m(:a => 1, :b => 2)" do
    parse do
      [:call,
       nil,
       :m,
       [:arglist, [:hash, [:lit, :a], [:lit, 1], [:lit, :b], [:lit, 2]]]]
    end
  end

  relates "m(42, :a => 1, :b => 2)" do
    parse do
      [:call,
       nil,
       :m,
       [:arglist, [:lit, 42], [:hash, [:lit, :a], [:lit, 1], [:lit, :b], [:lit, 2]]]]
    end
  end

  relates "m(42, :a => 1, :b => 2, *c)" do
    parse do
      [:call,
       nil,
       :m,
       [:arglist,
        [:lit, 42],
        [:hash, [:lit, :a], [:lit, 1], [:lit, :b], [:lit, 2]],
        [:splat, [:call, nil, :c, [:arglist]]]]]
    end
  end

  relates "m(42)" do
    parse do
      [:call, nil, :m, [:arglist, [:lit, 42]]]
    end
  end

  relates "a(:b) { :c }" do
    parse do
      [:iter, [:call, nil, :a, [:arglist, [:lit, :b]]], nil, [:lit, :c]]
    end
  end

  relates "a [42]" do
    parse do
      [:call, nil, :a, [:arglist, [:array, [:lit, 42]]]]
    end
  end

  relates "42 if block_given?" do
    parse do
      [:if, [:call, nil, :block_given?, [:arglist]], [:lit, 42], nil]
    end
  end

  relates "method" do
    parse do
      [:call, nil, :method, [:arglist]]
    end
  end

  relates <<-ruby do
      a << begin
             b
           rescue
             c
           end
    ruby

    parse do
      [:call,
       [:call, nil, :a, [:arglist]],
       :<<,
       [:arglist,
        [:rescue,
         [:call, nil, :b, [:arglist]],
         [:resbody, [:array], [:call, nil, :c, [:arglist]]]]]]
    end
  end

  relates "meth([*[1]])" do
    parse do
      [:call,
        nil,
        :meth,
        [:arglist, [:array, [:splat, [:array, [:lit, 1]]]]]]
    end
  end

  relates "meth(*[1])" do
    parse do
      [:call, nil, :meth, [:arglist, [:splat, [:array, [:lit, 1]]]]]
    end
  end
end
