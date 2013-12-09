describe "An Or node" do
  relates "(a or b)" do
    parse do
      [:or, [:call, nil, :a, [:arglist]], [:call, nil, :b, [:arglist]]]
    end
  end

  relates "((a || b) || (c && d))" do
    parse do
      [:or,
       [:or, [:call, nil, :a, [:arglist]], [:call, nil, :b, [:arglist]]],
       [:and, [:call, nil, :c, [:arglist]], [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "((a or b) or (c and d))" do
    parse do
      [:or,
       [:or, [:call, nil, :a, [:arglist]], [:call, nil, :b, [:arglist]]],
       [:and, [:call, nil, :c, [:arglist]], [:call, nil, :d, [:arglist]]]]
    end
  end

  relates "() or a" do
    parse do
      [:or, [:nil], [:call, nil, :a, [:arglist]]]
    end
  end

  relates "a or ()" do
    parse do
      [:or, [:call, nil, :a, [:arglist]], [:nil]]
    end
  end
end
