#include "SoundProducer.h"

SoundProducer::SoundProducer(std::string nameOfSound) {
    soundName = nameOfSound;
}

std::string SoundProducer::getSoundName() const {
    return soundName;
}
