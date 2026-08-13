#include <cmath>
#include <iostream>
#include <utility>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long nb_cases;
    std::cin >> nb_cases;

    for (long long w = 0; w < nb_cases; w++)
    {
        long long n, m, i, j;
        std::cin >> n;
        std::cin >> m;
        std::cin >> i;
        std::cin >> j;

        if (n % 2 == 1 && m % 2 == 1 && i == (n + 1) / 2 && j == (m + 1) / 2)
        {
            std::cout << 1 << " " << 1 << " " << n << " " << m << "\n";
            continue;
        }

        std::pair<long long, long long> hg{ 1, 1 };
        std::pair<long long, long long> hd{ 1, m };
        std::pair<long long, long long> bg{ n, 1 };
        std::pair<long long, long long> bd{ n, m };

        std::vector<std::pair<std::pair<long long, long long>,
                              std::pair<long long, long long>>>
            paires_sommets{ { hg, hd }, { hg, bg }, { hg, bd },
                            { hd, bd }, { bg, bd }, { hd, bg } };

        std::pair<std::pair<long long, long long>,
                  std::pair<long long, long long>>
            best_pair;
        long long best_total = 0;
        for (auto &paire : paires_sommets)
        {
            long long total = std::abs(paire.first.first - paire.second.first)
                + std::abs(paire.first.second - paire.second.second)
                + std::abs(paire.first.first - i)
                + std::abs(paire.first.second - j)
                + std::abs(paire.second.first - i)
                + std::abs(paire.second.second - j);

            if (total >= best_total)
            {
                best_total = total;
                best_pair = paire;
            }
        }

        std::cout << best_pair.first.first << " " << best_pair.first.second
                  << " " << best_pair.second.first << " "
                  << best_pair.second.second << "\n";
    }
}

