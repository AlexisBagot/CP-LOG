#include <iostream>
#include <vector>

int main()
{
    int nb_cases;
    std::cin >> nb_cases;

    std::vector<long long> cases;
    for (int i = 0; i < nb_cases; i++)
    {
        long long nb;
        std::cin >> nb;
        cases.push_back(nb);
    }

    for (auto &cas : cases)
    {
        if (cas == 1)
        {
            std::cout << 1 << "\n";
            continue;
        }
        long long current = 1;
        while (true)
        {
            if (cas % current == 0)
                current++;
            else
                break;
        }
        std::cout << current - 1 << "\n";
    }
}
