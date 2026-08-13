#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int nb_cases;
    std::cin >> nb_cases;
    while (nb_cases--)
    {
        int arraysize, nb_queries;
        std::cin >> arraysize >> nb_queries;

        std::vector<int> array;
        std::vector<int> sumarray;

        sumarray.push_back(0);
        int totalsize = 0;
        for (int i = 0; i < arraysize; i++)
        {
            int value;
            std::cin >> value;
            totalsize += value;

            array.push_back(value);
            sumarray.push_back(totalsize);
        }

        int maxval = sumarray[sumarray.size() - 1];
        for (int q = 0; q < nb_queries; q++)
        {
            int l, r, k;
            std::cin >> l >> r >> k;

            int intervalsum = sumarray[r] - sumarray[l - 1];

            int leftover = maxval - intervalsum;

            int replace_odd = (k * (r - l + 1)) % 2;
            int left_odd = leftover % 2;

            if ((replace_odd && left_odd) || (!replace_odd && !left_odd))
            {
                std::cout << "NO" << "\n";
                continue;
            }
            else
            {
                std::cout << "YES" << "\n";
                continue;
            }
        }
    }
}
