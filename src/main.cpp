#include "game.h"
#include "threadTest.h"
#include <vector>
#include <bits/stdc++.h>
#include <chrono>

int main()
{

    //game g;
    //g.run();

    std::vector<threadTest> threadVector;


    // for (int i =0; i < 10; i++)
    // {
    //     threadTest newtest;
    //     threadVector.push_back(newtest);
    // }

    // std::vector<std::thread> threads;

    // for (auto test : threadVector)
    // {

    //     //threads.push_back(std::thread(&threadTest::Increment, &test));
    // }

    // for (auto& thread : threads)
    // {
    //     //thread.join();
    // }

    std::chrono::milliseconds mil(1000);

    std::chrono::steady_clock clock;

    threadTest looptest;

    

    std::thread t1(&threadTest::Loop, &looptest);

    auto stopLoop = [&looptest]()
    {
        std::mt19937_64 eng{std::random_device{}()};  
        std::uniform_int_distribution<> dist{10, 100};
        std::this_thread::sleep_for(std::chrono::milliseconds{dist(eng)});
        looptest.Stop();
    };


    std::thread t2(stopLoop);


    //Lambda example
    [](int i, int j)
    {
        i + j;
    };

    t1.join();
    t2.join();

    return 0;
}
