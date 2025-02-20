#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxNum = max(max(a, b), c);
    int minNum = min(min(a, b), c);

    cout << minNum << " " << maxNum << endl;

    return 0;
}