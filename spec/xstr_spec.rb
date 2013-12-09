describe "A Xstr node" do
  relates "`touch 5`" do
    parse do
      [:xstr, "touch 5"]
    end
  end
end
