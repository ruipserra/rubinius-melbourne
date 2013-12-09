describe "A Not node" do
  relates "(not true)" do
    parse do
      [:not, [:true]]
    end
  end

  relates <<-ruby do
      a = 1
      b = !a
    ruby

    parse do
      [:block, [:lasgn, :a, [:lit, 1]], [:lasgn, :b, [:not, [:lvar, :a]]]]
    end
  end
end
