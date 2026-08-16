#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int nb_cases;
    std::cin >> nb_cases;

    for (int i = 0; i < nb_cases; i++)
    {
        int taille_nb;
        std::cin >> taille_nb;
        int even_ctr = 0;
        int odd_ctr = 0;
        for (int j = 0; j < taille_nb; j++)
        {
            char val;
            std::cin >> val;
            if (val == '1')
            {
                if (j == 0)
                    even_ctr++;
                else if (j % 2 == 0)
                    even_ctr++;
                else
                    odd_ctr++;
            }
        }

        for (int j = 0; j < taille_nb; j++)
        {
            char val;
            std::cin >> val;
            if (val == '1')
            {
                if (j == 0)
                    even_ctr--;
                else if (j % 2 == 0)
                    even_ctr--;
                else
                    odd_ctr--;
            }
        }
        if (even_ctr == 0 && odd_ctr == 0)
        {
            std::cout << "YES" << "\n";
        }
        else
            std::cout << "NO" << "\n";
    }
}
