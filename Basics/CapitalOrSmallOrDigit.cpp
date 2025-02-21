#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;

    bool isDigit = false;
    bool isAlpha = false;
    bool isCapital = false;
    bool isSmall = false;

    if (x >= 65 && x <= 90)
    {
        isCapital = true;
        isDigit = false;
        isAlpha = true;
    }
    else if (x >= 48 && x <= 57)
    {
        isDigit = true;
    }
    else if (x >= 97 && x <= 122)
    {
        isAlpha = true;
        isSmall = true;
    }

    if (isDigit)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;

        if (isSmall)
        {
            cout << "IS SMALL" << endl;
        }
        else
        {
            cout << "IS CAPITAL" << endl;
        }
    }

    return 0;
}