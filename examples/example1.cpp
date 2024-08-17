#include <iostream>

#include "../files/console.hpp"

imt main()
{
    scl::console::clear()

    scl::console::write("test")

    while (true)
    {
        scl::console::write_new_frame("test .");
        scl::console::write_new_frame("test ..");
        scl::console::write_new_frame("test ...");
    }

    return 0;
}