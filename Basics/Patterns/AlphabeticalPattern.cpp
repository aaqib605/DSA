#include <bits/stdc++.h>
using namespace std;

void helper(int i)
{
    for (int ch = 0; ch <= i; ch++)
    {
        cout << char(ch + 'A');
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int rows;
        cin >> rows;

        for (int i = 0; i < rows; i++)
        {
            helper(i);
            cout << endl;
        }
    }

    return 0;
}