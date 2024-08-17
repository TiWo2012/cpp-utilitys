#include <iostream>
#include <cstdlib>

namespace scl
{
    namespace console
    {
        
    }
    // clears tehr curent terminal frame
    void clear()
    {
        system("clear");
    }

    //prints a text out in the console
    void write(std::string string)
    {
        std::cout << string;
    }

    // clears the frame and prints out a new line
    void write_new_frame(std::string string)
    {
        system("clear");
        std::cout << string;
    }

    //gives out an 2d array to the terminal. the maximum amount is 200 by 200 charakters
    void print_multiline(char text[200][200])
    {
        for (int i = 0; i<201; i++)
        {
            for (int j = 0; j<201; j++)
            {
                if (j==201)
                {
                    std::cout << '\n';
                    break;
                }

                std::cout << text[i][j];
            }
        }
    }

    //does the same as the one above but clears the terminal first
    void clear_print_multiline(char text[200][200])
    {
        for (int i = 0; i<201; i++)
        {
            for (int j = 0; j<201; j++)
            {
                if (j == 201)
                {
                    std::cout << '\n';
                }

                std::cout << text[i][j];
            }
        }
    }
}
