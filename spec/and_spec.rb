describe "An And node" do
  relates "(a and b)" do
    parse do
      [:and, [:call, nil, :a, [:arglist]], [:call, nil, :b, [:arglist]]]
    end
  end

  relates "() and a" do
    parse do
      [:and, [:nil], [:call, nil, :a, [:arglist]]]
    end
  end

  relates "a and ()" do
    parse do
      [:and, [:call, nil, :a, [:arglist]], [:nil]]
    end
  end
end
