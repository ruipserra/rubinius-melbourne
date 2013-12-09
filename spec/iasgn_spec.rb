describe "A Iasgn node" do
  relates "@a = 4" do
    parse do
      [:iasgn, :@a, [:lit, 4]]
    end
  end

  relates "@a = *[1]" do
    parse do
      [:iasgn, :@a, [:svalue, [:splat, [:array, [:lit, 1]]]]]
    end
  end

  relates <<-ruby do
      a = 1
      @a = a
    ruby

    parse do
      [:block,
        [:lasgn, :a, [:lit, 1]],
        [:iasgn, :@a, [:lvar, :a]]]
    end
  end
end
