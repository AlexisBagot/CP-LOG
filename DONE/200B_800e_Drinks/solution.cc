#include <iostream>
#include <vector>

int main(void)
{
    double nb_values;

    if (nb_values == 0)
    {
        std::cout << 0 << "\n";
        return 0;
    }

    std::cin >> nb_values;
    std::vector<int> drinks;
    for (int i = 0; i < nb_values; i++)
    {
        int value;
        std::cin >> value;
        drinks.push_back(value);
    }

    double multiplicator = 1 / nb_values;
    double res = 0;
    for (auto &drink : drinks)
    {
        res += drink * multiplicator;
    }

    std::cout << res << "\n";
}
