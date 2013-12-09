describe "A Dregx node" do
  relates <<-ruby do
      /(\#{})/
    ruby

    parse do
      [:dregx, "(", [:str, ""], [:str, ")"]]
    end
  end

  relates "/x\#{(1 + 1)}y/" do
    parse do
      [:dregx,
       "x",
       [:evstr, [:call, [:lit, 1], :+, [:arglist, [:lit, 1]]]],
       [:str, "y"]]
    end
  end

  relates "/a\#{}b/" do
    parse do
      [:dregx, "a", [:str, ""], [:str, "b"]]
    end
  end

  relates "/\#{@rakefile}/" do
    parse do
      [:dregx, "", [:evstr, [:ivar, :@rakefile]]]
    end
  end

  relates "/\#{1}/n" do
    parse do
      [:dregx, "", [:evstr, [:lit, 1]], 16]
    end
  end

  relates "/\#{IAC}\#{SB}/no" do
    parse do
      [:dregx_once, "", [:evstr, [:const, :IAC]], [:evstr, [:const, :SB]], 16]
    end
  end

  relates "/x\#{(1 + 1)}y/o" do
    parse do
      [:dregx_once,
       "x",
       [:evstr, [:call, [:lit, 1], :+, [:arglist, [:lit, 1]]]],
       [:str, "y"]]
    end
  end
end
