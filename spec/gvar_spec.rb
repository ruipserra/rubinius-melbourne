describe "A Gvar node" do
  relates "$x" do
    parse do
      [:gvar, :$x]
    end
  end

  relates "$stderr" do
    parse do
      [:gvar, :$stderr]
    end
  end

  relates "$__blah" do
    parse do
      [:gvar, :$__blah]
    end
  end

  relates "$_" do
    parse do
      [:gvar, :$_]
    end
  end
end
