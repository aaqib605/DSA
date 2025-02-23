#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a > b)
        {
            int sum = a + b;
            a = sum - a;
            b = sum - b;
        }

        int sumOfOddNums = 0;

        for (int i = a + 1; i < b; i++)
        {
            if (i % 2 != 0)
            {
                sumOfOddNums += i;
            }
        }

        cout << sumOfOddNums << endl;
    }

    return 0;
}