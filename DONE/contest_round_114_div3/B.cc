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
        int string_size;
        std::cin >> string_size;

        std::vector<char> word;
        for (int b = 0; b < string_size; b++)
        {
            char val;
            std::cin >> val;
            word.push_back(val);
        }

        if (string_size == 0)
        {
            std::cout << 0 << "\n";
            continue;
        }

        int min_size = 1;
        int current_bacth = 0;
        bool reduced = false;
        char prev_letter = word[0];
        bool super = false;

        for (int l = 0; l < word.size(); l++)
        {
            if (prev_letter != word[l])
            {
                if (current_bacth == 1 && l >= 2)
                {
                    if (!super && reduced && word[l] == word[l - 2])
                    {
                        min_size--;
                        super = true;
                    }
                    if (!super && !reduced && word[l] == word[l - 2])
                    {
                        min_size -= 2;
                        super = true;
                        reduced = true;
                    }
                    if (!reduced && !super)
                    {
                        min_size--;
                        reduced = true;
                    }
                }
                min_size++;
                current_bacth = 1;
                prev_letter = word[l];
                continue;
            }
            current_bacth++;
            prev_letter = word[l];
        }

        std::cout << min_size << "\n";
    }
}
