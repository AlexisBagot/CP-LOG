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
        int n;
        std::cin >> n;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            std::cin >> val;
            if (val > max)
                max = val;
        }
        std::cout << max * n << "\n";
    }
}
