#include <iostream>
#include <string>

struct Duck {
    const std::string name;
};

struct Dog {
    const std::string name;
};

struct Cat {
    const std::string name;
};

template<typename T>
void sound(const T&);

template<>
void sound(const Duck& duck) {
    std::cout << duck.name << " the Duck sounds quack quack." << std::endl;
}

template<>
void sound(const Dog& dog) {
    std::cout << dog.name << " the Dog sounds bow-wow." << std::endl;
}

template<>
void sound(const Cat& cat) {
    std::cout << cat.name << " the Cat sounds miaow miaow." << std::endl;
}

int main(int, char* []) {
    Duck duck = { "Donald" };
    Dog dog = { "Shiro" };
    Cat cat = { "Tama" };

    sound(duck);
    sound(dog);
    sound(cat);

    return 0;
}
