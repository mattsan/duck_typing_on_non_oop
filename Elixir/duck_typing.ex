# duck = %Duck{name: "Donald"} # ドナルド
# dog = %Dog{name: "Shiro"}    # しろ
# cat = %Cat{name: "Tama"}     # たま
#
# Sound.sound(duck)
# Sound.sound(dog)
# Sound.sound(cat)

# 鶩
defmodule Duck do
  defstruct name: nil
end

# 犬
defmodule Dog do
  defstruct name: nil
end

# 猫
defmodule Cat do
  defstruct name: nil
end

# 鳴くプロトタイプ
defprotocol Sound do
  def sound(_)
end

# 鶩が鳴く実装
defimpl Sound, for: Duck do
  def sound(animal) do
    IO.puts "#{animal.name} the Duck sounds quack quack."
  end
end

# 犬が鳴く実装
defimpl Sound, for: Dog do
  def sound(animal) do
    IO.puts "#{animal.name} the Dog sounds bow-wow."
  end
end

# 猫が鳴く実装
defimpl Sound, for: Cat do
  def sound(animal) do
    IO.puts "#{animal.name} the Cat sounds miaow miaow."
  end
end
