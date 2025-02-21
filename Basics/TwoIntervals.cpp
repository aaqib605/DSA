#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if ((l2 >= l1 && l2 <= r1) || (l1 >= l2 && l1 <= r2))
        {
            int left = max(l1, l2);
            int right = min(r1, r2);

            cout << left << " " << right << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}