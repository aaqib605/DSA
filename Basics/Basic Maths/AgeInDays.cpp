#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int years = n / 365;
        int months = (n % 365) / 30;
        int days = (n % 365) % 30;

        cout << years << " years" << endl;
        cout << months << " months" << endl;
        cout << days << " days" << endl;
    }

    return 0;
}