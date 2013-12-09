describe "A Match node" do
  relates "1 if /x/" do
    parse do
      [:if, [:match, [:regex, "x", 0]], [:lit, 1], nil]
    end
  end
end
