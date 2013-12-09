describe "A Dot2 node" do
  relates "(a..b)" do
    parse do
      [:dot2, [:call, nil, :a, [:arglist]], [:call, nil, :b, [:arglist]]]
    end
  end
end
