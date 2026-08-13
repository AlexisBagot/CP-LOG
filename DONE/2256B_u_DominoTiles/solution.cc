#include <cmath>
#include <cstddef>
#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int nb_cases;
    std::cin >> nb_cases;

    for (int i = 0; i < nb_cases; i++)
    {
        int nb_tiles;
        std::cin >> nb_tiles;

        std::vector<char> sub1;
        std::vector<char> sub2;

        int count_uk_1 = 0;
        int count_uk_2 = 0;

        char previous1 = 'a';
        char previous2 = 'a';
        char anteprevious1 = 'a';
        char anteprevious2 = 'a';

        bool wrong = false;
        for (int j = 0; j < nb_tiles; j++)
        {
            char val;
            std::cin >> val;
            if ((j + 1) % 2 == 0)
            {
                sub1.push_back(val);
                if (val == '?')
                    count_uk_1++;

                if (previous1 != 'a')
                {
                    if ((val == previous1) && (val != '?'))
                    {
                        wrong = true;
                    }
                    if (anteprevious1 != 'a')
                    {
                        if ((previous1 == '?') && (anteprevious1 != val)
                            && (anteprevious1 != '?') && (val != '?'))
                        {
                            wrong = true;
                        }
                    }
                }

                if (previous1 != 'a')
                    anteprevious1 = previous1;
                previous1 = val;
            }
            else
            {
                sub2.push_back(val);
                if (val == '?')
                    count_uk_2++;
                if (previous2 != 'a')
                {
                    if ((val == previous2) && (val != '?'))
                    {
                        wrong = true;
                    }
                    if (anteprevious2 != 'a')
                    {
                        if ((previous2 == '?') && (anteprevious2 != val)
                            && (anteprevious2 != '?') && (val != '?'))
                        {
                            wrong = true;
                        }
                    }
                }
                if (previous2 != 'a')
                    anteprevious2 = previous2;
                previous2 = val;
            }
        }
        if (wrong)
        {
            wrong = false;
            std::cout << 0 << "\n";
            continue;
        }
        long long a = 1;
        long long b = 1;

        if (count_uk_1 == sub1.size())
        {
            if (count_uk_1 == 1 || count_uk_1 == 2)
            {
                a = 2;
            }
            else if (count_uk_1 > 2)
            {
                a = 4;
            }
        }
        if (count_uk_2 == sub2.size())
        {
            if (count_uk_2 == 1 || count_uk_2 == 2)
            {
                b = 2;
            }
            else if (count_uk_2 > 2)
            {
                b = 4;
            }
        }
        long long result = (a * b) % 998244353;

        std::cout << result << "\n";
    }
}
