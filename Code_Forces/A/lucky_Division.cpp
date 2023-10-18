#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n)
{
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit != 4 && lastDigit != 7)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && isLucky(i))
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;
    return 0;
}
