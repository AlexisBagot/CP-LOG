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
        int arrsize;
        std::cin >> arrsize;

        std::vector<int> vec;
        for (int i = 0; i < arrsize; i++)
        {
            int val;
            std::cin >> val;
            if (val == 1)
            {
                vec.push_back(2);
            }
            else
            {
                vec.push_back(val);
            }
        }

        for (int i = 0; i < arrsize - 1; i++)
        {
            if (vec[i + 1] % vec[i] == 0)
            {
                vec[i + 1] += 1;
            }
        }

        for (auto elem : vec)
        {
            std::cout << elem << " ";
        }
        std::cout << "\n";
    }
}
