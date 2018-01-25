#pragma once
#include "SoundProducer.h"

class Whisperer : public SoundProducer {
public:
    Whisperer() : SoundProducer("Whisper") {}
    virtual ~Whisperer() {}
    void makeSound() const override;
};

