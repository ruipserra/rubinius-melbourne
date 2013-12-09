describe "A Dstr node" do
  relates <<-ruby do
      "hello \#{}"
    ruby

    parse do
      [:dstr, "hello ", [:str, ""]]
    end
  end

  relates <<-ruby do
      argl = 1
      "x\#{argl}y"
    ruby

    parse do
      [:block,
       [:lasgn, :argl, [:lit, 1]],
       [:dstr, "x", [:evstr, [:lvar, :argl]], [:str, "y"]]]
    end
  end

  relates <<-ruby do
      argl = 1
      "x\#{("%.2f" % 3.14159)}y"
    ruby

    parse do
      [:block,
       [:lasgn, :argl, [:lit, 1]],
       [:dstr,
        "x",
        [:evstr, [:call, [:str, "%.2f"], :%, [:arglist, [:lit, 3.14159]]]],
        [:str, "y"]]]
    end
  end

  relates <<-ruby do
      max = 2
      argl = 1
      "x\#{("%.\#{max}f" % 3.14159)}y"
    ruby

    parse do
      [:block,
       [:lasgn, :max, [:lit, 2]],
       [:lasgn, :argl, [:lit, 1]],
       [:dstr,
        "x",
        [:evstr,
         [:call,
          [:dstr, "%.", [:evstr, [:lvar, :max]], [:str, "f"]],
          :%,
          [:arglist, [:lit, 3.14159]]]],
        [:str, "y"]]]
    end
  end

  relates '"#{22}aa" "cd#{44}" "55" "#{66}"' do
    parse do
      [:dstr,
       "",
       [:evstr, [:lit, 22]],
       [:str, "aa"],
       [:str, "cd"],
       [:evstr, [:lit, 44]],
       [:str, "55"],
       [:evstr, [:lit, 66]]]
    end
  end

  relates '"a #$global b #@ivar c #@@cvar d"' do
    parse do
      [:dstr,
       "a ",
       [:evstr, [:gvar, :$global]],
       [:str, " b "],
       [:evstr, [:ivar, :@ivar]],
       [:str, " c "],
       [:evstr, [:cvar, :@@cvar]],
       [:str, " d"]]
    end
  end

  relates <<-ruby do
<<EOM
  blah
\#{1 + 1}blah
EOM
    ruby

    parse do
      [:dstr,
       "  blah\n",
       [:evstr, [:call, [:lit, 1], :+, [:arglist, [:lit, 1]]]],
       [:str, "blah\n"]]
    end
  end

  relates <<-ruby do
<<-EOF
def test_\#{action}_valid_feed
EOF
    ruby

    parse do
      [:dstr,
       "def test_",
       [:evstr, [:call, nil, :action, [:arglist]]],
       [:str, "_valid_feed\n"]]
    end
  end

  relates <<-ruby do
<<-EOF
s1 '\#{RUBY_PLATFORM}' s2
\#{__FILE__}
EOF
    ruby

    parse do
      [:dstr,
       "s1 '",
       [:evstr, [:const, :RUBY_PLATFORM]],
       [:str, "' s2\n"],
       [:evstr, [:file]],
       [:str, "\n"]]
    end
  end

  relates "%Q[before [\#{nest}] after]" do
    parse do
      [:dstr,
       "before [",
       [:evstr, [:call, nil, :nest, [:arglist]]],
       [:str, "] after"]]
    end
  end

  relates '"#{"blah"}#{__FILE__}:#{__LINE__}: warning: #{$!.message} (#{$!.class})"' do
    parse do
      [:dstr,
       "blah",
       [:evstr, [:file]],
       [:str, ":"],
       [:evstr, [:lit, 1]],
       [:str, ": warning: "],
       [:evstr, [:call, [:gvar, :$!], :message, [:arglist]]],
       [:str, " ("],
       [:evstr, [:call, [:gvar, :$!], :class, [:arglist]]],
       [:str, ")"]]
    end
  end

  relates '"before #{from} middle #{to} (#{__FILE__}:#{__LINE__})"' do
    parse do
      [:dstr,
       "before ",
       [:evstr, [:call, nil, :from, [:arglist]]],
       [:str, " middle "],
       [:evstr, [:call, nil, :to, [:arglist]]],
       [:str, " ("],
       [:evstr, [:file]],
       [:str, ":"],
       [:evstr, [:lit, 1]],
       [:str, ")"]]
    end
  end
end
