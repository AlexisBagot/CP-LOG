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
        std::vector<int> numbers;
        for (int j = 0; j < 3; j++)
        {
            int val;
            std::cin >> val;
            numbers.push_back(val);
        }
        std::sort(numbers.begin(), numbers.end());
        if (numbers[0] + numbers[1] < numbers[2])
        {
            numbers[2] = numbers[0] + numbers[1];
        }
        std::cout << numbers[2] - numbers[0] << "\n";
    }
}
