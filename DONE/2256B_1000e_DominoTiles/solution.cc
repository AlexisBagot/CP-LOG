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

    while (nb_cases--)
    {
        int nb_tiles;
        std::cin >> nb_tiles;

        std::vector<char> sub1;
        std::vector<char> sub2;

        int count_uk_1 = 0;
        int count_uk_2 = 0;

        int a;
        int b;

        bool a_valid_type1 = true; // 0101
        bool a_valid_type2 = true; // 1010

        bool b_valid_type1 = true;
        bool b_valid_type2 = true;

        bool a_flag1 = false;
        bool a_flag2 = true;

        bool b_flag1 = false;
        bool b_flag2 = true;

        for (int j = 0; j < nb_tiles; j++)
        {
            char val;
            std::cin >> val;
            if ((j + 1) % 2 == 0)
            {
                sub1.push_back(val);
                if (val == '?')
                    count_uk_1++;
                int num = val - '0';
                if (num != a_flag1 && val != '?')
                    a_valid_type1 = false;
                if (num != a_flag2 && val != '?')
                    a_valid_type2 = false;

                a_flag1 = !a_flag1;
                a_flag2 = !a_flag2;
            }
            else
            {
                sub2.push_back(val);
                if (val == '?')
                    count_uk_2++;
                int num = val - '0';
                if (num != b_flag1 && val != '?')
                    b_valid_type1 = false;
                if (num != b_flag2 && val != '?')
                    b_valid_type2 = false;
                b_flag1 = !b_flag1;
                b_flag2 = !b_flag2;
            }
        }

        if ((!a_valid_type1 && !a_valid_type2)
            || (!b_valid_type1 && !b_valid_type2))
        {
            std::cout << 0 << "\n";
            continue;
        }

        if (count_uk_1 == sub1.size())
        {
            a = 2;
        }
        else
        {
            a = 1;
        }

        if (count_uk_2 == sub2.size())
        {
            b = 2;
        }
        else
        {
            b = 1;
        }
        long long result = (a * b) % 998244353;

        std::cout << result << "\n";
    }
}
