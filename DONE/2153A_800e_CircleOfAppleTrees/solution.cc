#include <algorithm>
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
        int nb_trees;
        std::cin >> nb_trees;

        std::vector<int> trees;
        for (int j = 0; j < nb_trees; j++)
        {
            int val;
            std::cin >> val;
            trees.push_back(val);
        }

        std::sort(trees.begin(), trees.end());

        int previous = 0;
        int apples_count = 0;
        for (auto elem : trees)
        {
            if (elem > previous)
            {
                apples_count++;
                previous = elem;
            }
        }

        std::cout << apples_count << "\n";
    }
}
