#include <iostream>
#include <cstdint>
#include <string>

#include "../files/console.hpp"
#include "../files/random.hpp"

int main()
{
    // example on how to use the random part of the library combined with console output
    int rand_num = scl::random::rand_int();

    // Convert integer to string
    std::string rand_num_str = std::to_string(rand_num);

    // Output the string to the console
    scl::console::write(rand_num_str);

    return 0;
}
