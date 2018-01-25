#pragma once

class Talker {
public:
    Talker() {}
    ~Talker() {}
    virtual void saySomething() const = 0;
};

