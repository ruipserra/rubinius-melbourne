describe "A Hash node" do
  relates "{ 1 => 2, 3 => 4 }" do
    parse do
      [:hash, [:lit, 1], [:lit, 2], [:lit, 3], [:lit, 4]]
    end
  end

  relates "{ 1 => (2 rescue 3) }" do
    parse do
      [:hash, [:lit, 1], [:rescue, [:lit, 2], [:resbody, [:array], [:lit, 3]]]]
    end
  end

  relates "{ 1 => [*1] }" do
    parse do
      [:hash, [:lit, 1], [:array, [:splat, [:lit, 1]]]]
    end
  end

  relates <<-ruby do
      a = 1
      { :a => a }
    ruby

    parse do
      [:block,
        [:lasgn, :a, [:lit, 1]],
        [:hash, [:lit, :a], [:lvar, :a]]]
    end
  end
end
