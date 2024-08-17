#include <iostream>

#include "../files/console.hpp"

imt main()
{
    scl::clear()

    scl::write("test")

    while (true)
    {
        scl::write_new_frame("test .");
        scl::write_new_frame("test ..");
        scl::write_new_frame("test ...");
    }

    return 0;
}