#include <bits/stdc++.h>
using namespace std;

char helper(int i, int j, int rows)
{
    if (i + j >= (rows - 1) && i >= j - (rows - 1))
    {
        return '*';
    }
    else
    {
        return ' ';
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

        int cols = (rows * 2) - 1;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << helper(i, j, rows) << " ";
            }

            cout << endl;
        }
    }

    return 0;
}