
#include <bits/stdc++.h>
using namespace std;

char helper(int i, int j, int row, int col)
{
    if (i == j % 8 || i + j % 8 == 8)
    {
        return char(j + 'a');
    }
    else
    {
        return ' ';
    }
}

int main()
{
    int row = 5;
    int col = 26;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << helper(i, j, row, col);
        }

        cout << endl;
    }

    return 0;
}