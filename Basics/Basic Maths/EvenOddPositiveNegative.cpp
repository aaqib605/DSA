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

    int evenCount = 0;
    int oddCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        if (array[i] < 0)
        {
            negativeCount++;
        }
        else if (array[i] > 0)
        {
            positiveCount++;
        }
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}