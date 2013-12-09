describe "A Dot3 node" do
  relates "(a...b)" do
    parse do
      [:dot3, [:call, nil, :a, [:arglist]], [:call, nil, :b, [:arglist]]]
    end
  end
end
