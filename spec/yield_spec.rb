describe "A Yield node" do
  relates "yield(42, 24)" do
    parse do
      [:yield, [:lit, 42], [:lit, 24]]
    end
  end

  relates "yield([42, 24])" do
    parse do
      [:yield, [:array, [:lit, 42], [:lit, 24]]]
    end
  end

  relates "yield([42])" do
    parse do
      [:yield, [:array, [:lit, 42]]]
    end
  end

  relates "yield([])" do
    parse do
      [:yield, [:array]]
    end
  end

  relates "yield(42)" do
    parse do
      [:yield, [:lit, 42]]
    end
  end

  relates "yield" do
    parse do
      [:yield]
    end
  end

  relates "yield([*[]])" do
    # TODO
  end

  relates "yield([*[1]])" do
    parse do
      [:yield, [:array, [:splat, [:array, [:lit, 1]]]]]
    end
  end

  relates "yield([*[1, 2]])" do
    parse do
      [:yield, [:array, [:splat, [:array, [:lit, 1], [:lit, 2]]]]]
    end
  end

  relates "yield(*[1])" do
    parse do
      [:yield, [:splat, [:array, [:lit, 1]]]]
    end
  end

  relates "yield(*[1, 2])" do
    parse do
      [:yield, [:splat, [:array, [:lit, 1], [:lit, 2]]]]
    end
  end
end
