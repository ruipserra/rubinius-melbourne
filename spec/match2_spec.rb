describe "A Match2 node" do
  relates '/x/ =~ "blah"' do
    parse do
      [:match2, [:regex, "x", 0], [:str, "blah"]]
    end
  end

  relates <<-ruby do
      x = "x"
      /\#{x}/ =~ x
    ruby

    parse do
      [:block,
       [:lasgn, :x, [:str, "x"]],
       [:match2, [:dregx, "", [:evstr, [:lvar, :x]]], [:lvar, :x]]]
    end
  end
end
