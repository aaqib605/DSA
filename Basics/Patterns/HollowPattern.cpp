#include <bits/stdc++.h>
using namespace std;

char helper(int i, int j, int row, int col)
{
    if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
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
        int row, col;
        cin >> row >> col;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << helper(i, j, row, col);
            }

            cout << endl;
        }
    }

    return 0;
}