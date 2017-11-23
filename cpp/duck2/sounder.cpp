#include "sounder.h"
#include "sound.h"

int main(int, char* []) {
    Duck duck = { "Donald" };
    Dog dog = { "Shiro" };
    Cat cat = { "Tama" };

    sound(duck);
    sound(dog);
    sound(cat);

    return 0;
}
