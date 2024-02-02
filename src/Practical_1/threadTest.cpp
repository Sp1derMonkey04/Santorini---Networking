 #include "threadTest.h"
        
void threadTest::Increment()
{
    for (int i =0; i < 100; i++)
    {
    std::cout << value << std::endl;
    value++;
    }

}

void threadTest::Loop()
{
    while (!hasToStop)
    {
        std::cout << "AHHH";
    }
    
    std::cout << "Done :)" << std::endl;
}