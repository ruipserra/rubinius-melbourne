describe "A Str node" do
  relates '"x"' do
    parse do
      [:str, "x"]
    end
  end

  relates <<-ruby do
      "before" \
      " after"
    ruby

    parse do
      [:str, "before after"]
    end
  end

  relates '"before" " after"' do
    parse do
      [:str, "before after"]
    end
  end

  relates <<-ruby do
      "file = \#{__FILE__}\n"
    ruby

    parse do
      [:dstr, "file = ", [:evstr, [:file]], [:str, "\n"]]
    end
  end

  relates <<-ruby do
<<'EOM'.strip
  blah
blah
EOM
    ruby

    parse do
      [:call, [:str, "  blah\nblah\n"], :strip, [:arglist]]
    end
  end

  relates <<-ruby do
a += <<-H1 + b + <<-H2
  first
H1
  second
H2
    ruby

    parse do
      [:lasgn,
       :a,
       [:call,
        [:lvar, :a],
        :+,
        [:arglist,
         [:call,
          [:call, [:str, "  first\n"], :+, [:arglist, [:call, nil, :b, [:arglist]]]],
          :+,
          [:arglist, [:str, "  second\n"]]]]]]
    end
  end

  relates <<-ruby do
<<-EOM
  blah
blah

  EOM
    ruby

    parse do
      [:str, "  blah\nblah\n\n"]
    end
  end

  relates <<-ruby do
<<'EOM'
  blah
blah
EOM
    ruby

    parse do
      [:str, "  blah\nblah\n"]
    end
  end

  relates "%(blah)" do
    parse do
      [:str, "blah"]
    end
  end
end
