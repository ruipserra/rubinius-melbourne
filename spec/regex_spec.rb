describe "A Regex node" do
  relates "str.split(//i)" do
    parse do
      [:call,
        [:call, nil, :str, [:arglist]],
        :split,
        [:arglist, [:regex, "", 1]]]
    end
  end

  relates "/x/n" do
    parse do
      [:regex, "x", 16]
    end
  end

  relates "/x/o" do
    parse do
      [:regex, "x", 0]
    end
  end

  relates "/x/" do
    parse do
      [:regex, "x", 0]
    end
  end
end
