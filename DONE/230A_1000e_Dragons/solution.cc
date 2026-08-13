#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int strength;
    std::cin >> strength;
    int nb_dragons;
    std::cin >> nb_dragons;

    std::vector<std::pair<int, int>> dragons;
    for (int i = 0; i < nb_dragons; i++)
    {
        int val;
        std::cin >> val;
        int rwd;
        std::cin >> rwd;
        dragons.push_back({ val, rwd });
    }

    std::sort(dragons.begin(), dragons.end());

    for (auto &paire : dragons)
    {
        if (strength > paire.first)
        {
            strength += paire.second;
        }
        else
        {
            std::cout << "NO" << "\n";
            return 0;
        }
    }

    std::cout << "YES" << "\n";
}
