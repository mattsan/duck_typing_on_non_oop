#include "sound.h"

#include <iostream>

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
