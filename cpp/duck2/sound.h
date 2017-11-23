#ifndef SOUND_H
#define SOUND_H

#include "sounder.h"

template<typename T>
void sound(const T&);

template<> void sound(const Duck& duck);
template<> void sound(const Dog& dog);
template<> void sound(const Cat& cat);

#endif//SOUND_H
