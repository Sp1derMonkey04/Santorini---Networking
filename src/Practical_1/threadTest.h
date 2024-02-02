#include <iostream>
#include <thread>
//#include "threads.h"

class threadTest {
private:
    int value { 0 };
    bool hasToStop = false;

public:
    void Increment();

    void Loop();

    void Stop(){ hasToStop = true; };
};