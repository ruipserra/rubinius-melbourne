describe "A Valias node" do
  relates "alias $y $x" do
    parse do
      [:valias, :$y, :$x]
    end
  end
end
