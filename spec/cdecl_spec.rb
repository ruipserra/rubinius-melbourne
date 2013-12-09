describe "A Cdecl node" do
  relates "X = 42" do
    parse do
      [:cdecl, :X, [:lit, 42]]
    end
  end

  relates "::X = 1" do
    parse do
      [:cdecl, [:colon3, :X], [:lit, 1]]
    end
  end

  relates "X::Y = 1" do
    parse do
      [:cdecl, [:colon2, [:const, :X], :Y], [:lit, 1]]
    end
  end

  relates "X::Y::Z = a" do
    parse do
      [:cdecl,
       [:colon2, [:colon2, [:const, :X], :Y], :Z],
       [:call, nil, :a, [:arglist]]]
    end
  end

  relates "a::A = 1" do
    parse do
      [:cdecl, [:colon2, [:call, nil, :a, [:arglist]], :A], [:lit, 1]]
    end
  end

  relates <<-ruby do
      a = Object
      a::B = b
    ruby

    parse do
      [:block,
       [:lasgn, :a, [:const, :Object]],
       [:cdecl, [:colon2, [:lvar, :a], :B], [:call, nil, :b, [:arglist]]]]
    end
  end
end
