describe "A While node" do
  pre_while_sexp = [
    :while,
     [:call, nil, :a, [:arglist]],
     [:call, [:call, nil, :b, [:arglist]], :+, [:arglist, [:lit, 1]]],
     true
  ]

  relates <<-ruby do
      while a
        b + 1
      end
    ruby

    parse do
      pre_while_sexp
    end
  end

  relates <<-ruby do
      a = x
      while a.b
        1
      end
    ruby

    parse do
      [:block,
       [:lasgn, :a, [:call, nil, :x, [:arglist]]],
       [:while, [:call, [:lvar, :a], :b, [:arglist]], [:lit, 1], true]]
    end
  end

  relates "b + 1 while a" do
    parse do
      pre_while_sexp
    end
  end

  relates <<-ruby do
      until not a
        b + 1
      end
    ruby

    parse do
      pre_while_sexp
    end
  end

  relates "b + 1 until not a" do
    parse do
      pre_while_sexp
    end
  end

  post_while_sexp = [
    :while,
     [:call, nil, :a, [:arglist]],
     [:call, [:call, nil, :b, [:arglist]], :+, [:arglist, [:lit, 1]]],
     false
  ]

  post_while = lambda do |g|
    top    = g.new_label
    rdo    = g.new_label
    brk    = g.new_label
    bottom = g.new_label

    g.push_modifiers

    top.set!

    g.push :self
    g.send :b, 0, true
    g.push 1
    g.send :+, 1, false
    g.pop

    rdo.set!

    g.push :self
    g.send :a, 0, true
    g.gif bottom

    g.check_interrupts
    g.goto top

    bottom.set!
    g.push :nil

    brk.set!
    g.pop_modifiers
  end

  relates <<-ruby do
      begin
        b + 1
      end while a
    ruby

    parse do
      post_while_sexp
    end
  end

  relates <<-ruby do
      begin
        b + 1
      end until not a
    ruby

    parse do
      post_while_sexp
    end
  end

  nil_condition_sexp = [:while, [:nil], [:call, nil, :a, [:arglist]], true]

  relates "a while ()" do
    parse do
      nil_condition_sexp
    end
  end

  relates <<-ruby do
      while ()
        a
      end
    ruby

    parse do
      nil_condition_sexp
    end
  end

  relates "a until not ()" do

    parse do
      nil_condition_sexp
    end
  end

  relates <<-ruby do
      until not ()
        a
      end
    ruby

    parse do
      nil_condition_sexp
    end
  end

  relates <<-ruby do
      while 1
        2
        break :brk
      end
    ruby

    # TODO
  end

  relates <<-ruby do
      while 1
        begin
          2
          break :brk
        rescue
          3
        end
      end
    ruby

    # TODO
  end

  relates <<-ruby do
      while 1
        begin
          2
        rescue
          3
          break :brk
        end
      end
    ruby

    # TODO
  end
end
