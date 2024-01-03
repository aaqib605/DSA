#include <bits/stdc++.h>

bool isPrime(int n)
{
    if (n == 1)
        return false;

    int divisorCount = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if ((n % i) == 0)
        {
            divisorCount += 2;
        }

        if (divisorCount > 2)
            return false;
    }

    return true;
}
