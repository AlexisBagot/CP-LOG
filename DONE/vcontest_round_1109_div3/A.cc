#include <cmath>
#include <functional>
#include <iostream>
#include <string>

int main()
{
    int nb_cases;
    std::cin >> nb_cases;

    for (int i = 0; i < nb_cases; i++)
    {
        int line_size;
        std::cin >> line_size;

        std::string line;
        std::cin >> line;

        int longest_line = 0;
        int current_line = 0;
        for (char c : line)
        {
            if (c == '#')
                current_line++;
            else
            {
                if (current_line > longest_line)
                    longest_line = current_line;
                current_line = 0;
            }
        }
        if (longest_line < current_line)
        {
            longest_line = current_line;
        }

        if (longest_line == 0)
        {
            std::cout << 0 << "\n";
            continue;
        }
        if (longest_line <= 2)
        {
            std::cout << 1 << "\n";
            continue;
        }
        if (longest_line % 2 == 0)
            std::cout << longest_line / 2 << "\n";
        else
            std::cout << longest_line / 2 + 1 << "\n";
    }
}
