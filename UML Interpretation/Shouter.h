#pragma once
#include "SoundProducer.h"

class Shouter : public SoundProducer {
public:
    Shouter() : SoundProducer("Shouter") {}
    virtual ~Shouter() {}
    void makeSound() const override;
};

