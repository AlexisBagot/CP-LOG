#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int nb_cases;
    std::cin >> nb_cases;

    while (nb_cases--)
    {
        int n, k;
        std::cin >> n >> k;

        std::string nb;
        std::cin >> nb;

        int red = 0;
        int blue = 0;

        std::vector<int> final_pos(2 * n, 0);

        for (int i = 0; i < 2 * n; i++)
        {
            if (nb[i] == '0')
            {
                continue;
            }
            else if (nb[(i + 1) % (2 * n)] == '1')
            {
                final_pos[i] = 1;
                continue;
            }
            else
            {
                final_pos[i] = 0;
                final_pos[(i + 1) % (2 * n)] = 1;
            }
        }

        for (int i = 0; i < (2 * n); i++)
        {
            if (final_pos[i] == 1)
            {
                if (i % 2 == 0)
                    blue++;
                else
                    red++;
            }
        }
        std::cout << red << " " << blue << "\n";
    }
}
