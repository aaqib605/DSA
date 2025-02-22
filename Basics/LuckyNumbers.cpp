#include <bits/stdc++.h>
using namespace std;

bool isLucky(int num)
{
    if (num < 10)
    {
        if (num != 4 && num != 7)
            return false;

        return true;
    }

    while (num)
    {
        int lastDigit = num % 10;

        if (lastDigit != 4 && lastDigit != 7)
            return false;

        num /= 10;
    }

    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    bool foundLucky = false;

    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            foundLucky = true;
            cout << i << " ";
        }
    }

    if (!foundLucky)
    {
        cout << -1 << endl;
    }

    return 0;
}