describe "A Colon2 node" do
  relates "X::Y" do
    parse do
      [:colon2, [:const, :X], :Y]
    end
  end
end
