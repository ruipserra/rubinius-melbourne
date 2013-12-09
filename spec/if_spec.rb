describe "An If node" do
  relates <<-ruby do
      if true then
        10
      else
        12
      end
    ruby

    parse do
      [:if, [:true], [:lit, 10], [:lit, 12]]
    end
  end

  relates "if b then a end" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], [:call, nil, :a, [:arglist]], nil]
    end
  end

  relates <<-ruby do
      if (x = 5
      (x + 1)) then
        nil
      end
    ruby

    parse do
      [:if,
       [:block,
        [:lasgn, :x, [:lit, 5]],
        [:call, [:lvar, :x], :+, [:arglist, [:lit, 1]]]],
       [:nil],
       nil]
    end
  end

  relates <<-ruby do
      if x = obj.x then
        x.do_it
      end
    ruby

    parse do
      [:if,
       [:lasgn, :x, [:call, [:call, nil, :obj, [:arglist]], :x, [:arglist]]],
       [:call, [:lvar, :x], :do_it, [:arglist]],
       nil]
    end
  end

  relates "return if false unless true" do
    parse do
      [:if, [:true], nil, [:if, [:false], [:return], nil]]
    end
  end

  relates "a if not b" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], nil, [:call, nil, :a, [:arglist]]]
    end
  end

  relates "a if b" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], [:call, nil, :a, [:arglist]], nil]
    end
  end

  relates "if not b then a end" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], nil, [:call, nil, :a, [:arglist]]]
    end
  end

  relates "if b then a end" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], [:call, nil, :a, [:arglist]], nil]
    end
  end

  nil_condition_sexp = [:if, [:nil], [:call, nil, :a, [:arglist]], nil]

  relates "a if ()" do
    parse do
      nil_condition_sexp
    end
  end

  relates "if () then a end" do
    parse do
      nil_condition_sexp
    end
  end

  relates "a unless not ()" do
    parse do
      nil_condition_sexp
    end
  end

  relates "unless not () then a end" do
    parse do
      nil_condition_sexp
    end
  end

  relates "a unless not b" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], [:call, nil, :a, [:arglist]], nil]
    end
  end

  relates "a unless b" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], nil, [:call, nil, :a, [:arglist]]]
    end
  end

  relates "unless not b then a end" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], [:call, nil, :a, [:arglist]], nil]
    end
  end

  relates "unless b then a end" do
    parse do
      [:if, [:call, nil, :b, [:arglist]], nil, [:call, nil, :a, [:arglist]]]
    end
  end
end
