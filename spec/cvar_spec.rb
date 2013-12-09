describe "A Cvar node" do
  relates "@@x" do
    parse do
      [:cvar, :@@x]
    end
  end

  relates <<-ruby do
      class A
        @@a
      end
    ruby

    parse do
      [:class, :A, nil, [:scope, [:cvar, :@@a]]]
    end
  end

  relates <<-ruby do
      module M
        @@a
      end
    ruby

    parse do
      [:module, :M, [:scope, [:cvar, :@@a]]]
    end
  end
end
