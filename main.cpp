#include <iostream>

// hpp files
#include "files/random.hpp"
#include "files/console.hpp"

int main()
{
    // random
    // pseudo random
    long long test1 = scl::pseudo_random(2,2,2);

    if (test1 == 2)
    {
        std::cout << "test1 passed";
    }
    else
    {
        return 1;
    }

    // rand int
    int test2 = scl::rand_int();

    if (test2 == 4)
    {
        std::cout << "test2 passed";
    }
    else
    {
        return 2;
    }

    // rand float
    float test3 = scl::rand_float();

    if (test3 == 0.3221F)
    {
        std::cout << "test3 passed";
    }
    else
    {
        return 3;
    }


    // console
    // clear

    // write
    
    //write and clear

    // print multiline

    // print multiline and clear

    
    return 0;
}