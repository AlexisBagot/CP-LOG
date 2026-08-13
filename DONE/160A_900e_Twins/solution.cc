#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main()
{
    int nb_coins;
    std::cin >> nb_coins;

    std::vector<int> values;

    int other_twin = 0;

    for (int i = 0; i < nb_coins; i++)
    {
        int value;
        std::cin >> value;
        values.push_back(value);
        other_twin += value;
    }

    sort(values.begin(), values.end(), std::greater<int>());

    int yourself = 0;
    int amount_coins = 0;

    for (int i = 0; i < nb_coins; i++)
    {
        other_twin -= values[i];
        yourself += values[i];
        amount_coins++;
        if (other_twin < yourself)
            break;
    }

    std::cout << amount_coins << "\n";
}
