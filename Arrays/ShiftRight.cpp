#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    x = x % n;

    int nums[n];
    int tempArr[n];

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        nums[i] = num;
        tempArr[i] = num;
    }

    for (int i = 0; i < n; i++)
    {
        int index = i + x;

        if (index >= n)
        {
            index = (i + x) - n;
        }

        tempArr[index] = nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << tempArr[i] << " ";
    }
    cout << endl;

    return 0;
}