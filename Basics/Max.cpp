#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        array[i] = num;
    }

    int maxNum = array[0];

    for (int i = 1; i < n; i++)
    {
        maxNum = max(maxNum, array[i]);
    }

    cout << maxNum << endl;

    return 0;
}