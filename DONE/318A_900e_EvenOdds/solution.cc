#include <iostream>

int main()
{
    long long k;
    long long n;

    std::cin >> n;
    std::cin >> k;

    long long res;

    if (k > (n + 1) / 2)
    {
        res = 0;
        long long togo = k - (n + 1) / 2;
        res += 2 * togo;
    }
    else
    {
        res = 1;
        res += 2 * (k - 1);
    }

    std::cout << res << "\n";
}
