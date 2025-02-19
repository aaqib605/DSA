#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b)
{
    int sum = a + b;
    a = sum - a;
    b = sum - b;

    cout << a << " " << b << endl;
}

int main()
{
    int a = 10;
    int b = 50;

    solve(a, b);

    return 0;
}
