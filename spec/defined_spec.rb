describe "A Defined node" do
  relates "defined? $x" do
    parse do
      [:defined, [:gvar, :$x]]
    end
  end

  relates "defined? a" do
    # TODO
  end

  relates <<-ruby do
      a = 1
      defined? a
    ruby
  end

  relates "defined? x = 1" do
    # TODO
  end

  relates "defined? x += 1" do
    # TODO
  end

  relates "defined? x ||= 1" do
    # TODO
  end

  relates "defined? x &&= 1" do
    # TODO
  end

  relates "defined? X" do
    # TODO
  end

  relates "defined? ::X" do
    # TODO
  end

  relates "defined? X::Y" do
    # TODO
  end

  relates "defined? X::Y::Z" do
    # TODO
  end

  relates "defined? self::A" do
    # TODO
  end

  relates "defined? self" do
    # TODO
  end

  relates "defined? true" do
    # TODO
  end

  relates "defined? false" do
    # TODO
  end

  relates "defined? nil" do
    # TODO
  end

  relates "defined? @var" do
    # TODO
  end

  relates "defined? @@var" do
    # TODO
  end

  relates "defined? :a" do
    # TODO
  end

  relates "defined? 'a'" do
    # TODO
  end

  relates "defined? 0" do
    # TODO
  end

  relates "defined? yield" do
    # TODO
  end

  relates "defined? A.m" do
    # TODO
  end

  relates "defined? ::A.m" do
    # TODO
  end

  relates "defined? A::B.m" do
    # TODO
  end

  relates "defined? a.b" do
    # TODO
  end

  relates <<-ruby do
      a = 1
      defined? a.to_s
    ruby

    # TODO
  end
end
