#include <cstdlib>
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int nb_cases;
    std::cin >> nb_cases;

    for (int i = 0; i < nb_cases; i++)
    {
        int a, b, c;
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;

        if (a == b || a == c || b == c)
        {
            std::cout << 0 << "\n";
            continue;
        }

        int min_ecart = std::min(std::abs(a - b), std::abs(a - c));
        min_ecart = std::min(min_ecart, std::abs(b - c));

        std::cout << min_ecart << "\n";
    }
}
