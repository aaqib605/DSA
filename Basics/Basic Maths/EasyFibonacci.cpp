#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (num == 2)
    {
        cout << 0 << " " << 1 << endl;
        return 0;
    }

    int firstFib = 0;
    int secondFib = 1;

    cout << firstFib << " " << secondFib << " ";

    for (int i = 3; i <= num; i++)
    {
        int nextFib = firstFib + secondFib;
        cout << nextFib << " ";

        firstFib = secondFib;
        secondFib = nextFib;
    }

    cout << endl;

    return 0;
}