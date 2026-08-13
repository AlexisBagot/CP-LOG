#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<int> houses;
    for (int i = 0; i < 3; i++)
    {
        int value;
        std::cin >> value;
        houses.push_back(value);
    }

    std::sort(houses.begin(), houses.end());

    int min = houses[0];
    int max = houses[2];

    int best = 300;
    for (int i = min; i <= max; i++)
    {
        int total = 0;
        total += abs(houses[0] - i);
        total += abs(houses[1] - i);
        total += abs(houses[2] - i);

        if (total < best)
            best = total;
    }

    std::cout << best << "\n";
}
