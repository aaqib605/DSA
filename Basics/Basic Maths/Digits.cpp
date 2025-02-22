#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            cout << num << "";
        }

        while (num)
        {
            int digit = num % 10;
            cout << digit << " ";

            num /= 10;
        }

        cout << endl;
    }

    return 0;
}