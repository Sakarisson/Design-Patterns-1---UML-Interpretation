#pragma once
#include "Talker.h"
#include "SoundProducer.h"
#include "Whisperer.h"
#include "Shouter.h"

class Uppgift1 : public Talker {
public:
    Uppgift1() {}
    ~Uppgift1();
    void setSoundProducer(SoundProducer*);
    void saySomething() const override;
private:
    SoundProducer* sound;
};

