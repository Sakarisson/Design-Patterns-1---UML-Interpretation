#include "Whisperer.h"
#include "Shouter.h"

int main() {
    SoundProducer* sound = new Whisperer();
    sound->makeSound();
    delete sound;
    sound = new Shouter();
    sound->makeSound();
    delete sound;
    return 0;
}
