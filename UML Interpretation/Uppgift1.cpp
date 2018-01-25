#include "Uppgift1.h"

Uppgift1::~Uppgift1() {
    delete sound;
}

void Uppgift1::setSoundProducer(SoundProducer* sp) {
    delete sound; // deallocate last pointer
    sound = sp;
}

void Uppgift1::saySomething() const {
    if (sound != nullptr) {
        sound->makeSound();
    }
}
