long long sumFirstN(long long n)
{
    if (n == 1)
        return 1;

    return n + sumFirstN(n - 1);
}