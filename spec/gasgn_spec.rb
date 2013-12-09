describe "A Gasgn node" do
  relates "$x = 42" do
    parse do
      [:gasgn, :$x, [:lit, 42]]
    end
  end

  relates "$a = *[1]" do
    parse do
      [:gasgn, :$a, [:svalue, [:splat, [:array, [:lit, 1]]]]]
    end
  end
end
