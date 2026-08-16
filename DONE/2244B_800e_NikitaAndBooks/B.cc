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
        int nb_stacks;
        std::vector<int> stacks_books;
        std::vector<long long> books_before;
        std::vector<long long> books_mini;

        std::cin >> nb_stacks;

        long long total = 0;
        long long mini_total = 0;
        for (int i = 0; i < nb_stacks; i++)
        {
            int nb;
            std::cin >> nb;

            stacks_books.push_back(nb);
            total += nb;
            books_before.push_back(total);
            books_mini.push_back(i + 1 + mini_total);
            mini_total = i + 1 + mini_total;
        }
        bool flop = false;
        for (int i = 0; i < nb_stacks; i++)
        {
            if (books_before[i] < books_mini[i])
            {
                std::cout << "NO" << "\n";
                flop = true;
                break;
            }
        }
        if (!flop)
        {
            std::cout << "YES" << "\n";
        }
        flop = false;
    }
}

