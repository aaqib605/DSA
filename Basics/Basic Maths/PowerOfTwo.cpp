#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (floor(log2(num)) == ceil(log2(num)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}