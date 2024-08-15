#include <iostream>
#include <cstdlib>

namespace lib
{
    void clear()
    {
        system("clear");
    }

    void write(std::string string)
    {
        std::cout << string;
    }

    void write_new_frame(std::string string)
    {
        system("clear");
        std::cout << string;
    }


}
