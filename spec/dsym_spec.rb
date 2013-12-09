describe "A Dsym node" do
  relates ':"x#{(1 + 1)}y"' do
    parse do
      [:dsym,
       "x",
       [:evstr, [:call, [:lit, 1], :+, [:arglist, [:lit, 1]]]],
       [:str, "y"]]
    end
  end
end
