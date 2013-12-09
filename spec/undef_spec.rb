describe "An Undef node" do
  relates "undef :x" do
    parse do
      [:undef, [:lit, :x]]
    end
  end

  relates "undef :x, :y" do
    parse do
      [:block, [:undef, [:lit, :x]], [:undef, [:lit, :y]]]
    end
  end

  relates "undef :x, :y, :z" do
    parse do
      [:block, [:undef, [:lit, :x]], [:undef, [:lit, :y]], [:undef, [:lit, :z]]]
    end
  end

  relates <<-ruby do
      f1
      undef :x
    ruby

    parse do
      [:block, [:call, nil, :f1, [:arglist]], [:undef, [:lit, :x]]]
    end
  end

  relates <<-ruby do
      f1
      undef :x, :y
    ruby

    parse do
      [:block,
       [:call, nil, :f1, [:arglist]],
       [:block, [:undef, [:lit, :x]], [:undef, [:lit, :y]]]]
    end
  end

  relates <<-ruby do
      undef :x, :y, :z
      f2
    ruby

    parse do
      [:block,
       [:undef, [:lit, :x]],
       [:undef, [:lit, :y]],
       [:undef, [:lit, :z]],
       [:call, nil, :f2, [:arglist]]]
    end
  end

  relates <<-ruby do
      f1
      undef :x, :y, :z
    ruby

    parse do
      [:block,
       [:call, nil, :f1, [:arglist]],
       [:block, [:undef, [:lit, :x]], [:undef, [:lit, :y]], [:undef, [:lit, :z]]]]
    end
  end

  relates <<-ruby do
      f1
      undef :x, :y, :z
      f2
    ruby

    parse do
      [:block,
       [:call, nil, :f1, [:arglist]],
       [:block, [:undef, [:lit, :x]], [:undef, [:lit, :y]], [:undef, [:lit, :z]]],
       [:call, nil, :f2, [:arglist]]]
    end
  end

  relates "class B; undef :blah; end" do
    parse do
      [:class, :B, nil, [:scope, [:undef, [:lit, :blah]]]]
    end
  end

  relates <<-ruby do
      undef :"x\#{1}", :"x\#{2}"
    ruby

    parse do
      [:block,
        [:undef, [:dsym, "x", [:evstr, [:lit, 1]]]],
        [:undef, [:dsym, "x", [:evstr, [:lit, 2]]]]]
    end
  end
end
