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

        for (int i{ 0 }; i < n; i++)
        {
            std::cout << i + 1 << " ";
        }
        std::cout << "\n";
    }
}
