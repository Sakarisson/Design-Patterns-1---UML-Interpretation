#include "Shouter.h"

void Shouter::makeSound() const {
    std::cout << this->getSoundName() << ": WOW YEEEH!!" << std::endl;
}
