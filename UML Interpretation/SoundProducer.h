#pragma once

#include <string>
#include <iostream>

class SoundProducer
{
public:
    SoundProducer(std::string);
    virtual ~SoundProducer() {}
    virtual void makeSound() const = 0;
    std::string getSoundName() const;
private:
    std::string soundName;
};
