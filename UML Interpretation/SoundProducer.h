#pragma once

#include <string>

class SoundProducer
{
public:
    SoundProducer(std::string);
    ~SoundProducer();
    virtual void makeSound() = 0;
    std::string getSoundName() const;
private:
    std::string soundName;
};
