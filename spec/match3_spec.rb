describe "A Match3 node" do
  relates '"blah" =~ /x/' do
    parse do
      [:match3, [:regex, "x", 0], [:str, "blah"]]
    end
  end

  relates <<-ruby do
      a = 'abc'
      if a =~ /\#{a}/
        1
      end
    ruby

    parse do
      [:block,
       [:lasgn, :a, [:str, "abc"]],
       [:if,
        [:match3, [:dregx, "", [:evstr, [:lvar, :a]]], [:lvar, :a]],
        [:lit, 1],
        nil]]
    end
  end
end
