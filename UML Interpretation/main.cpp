#include "Uppgift1.h"

int main() {
    Uppgift1 uppg1;
    uppg1.saySomething();
    uppg1.setSoundProducer(new Whisperer);
    uppg1.saySomething();
    uppg1.setSoundProducer(new Shouter);
    uppg1.saySomething();
    return 0;
}
