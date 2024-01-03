int helper(int num)
{
    int sumOfDivisors = 0;

    if (num == 1)
        return 1;

    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            sumOfDivisors += i;
            if ((num / i) != i)
            {
                sumOfDivisors += (num / i);
            }
        }
    }

    return sumOfDivisors;
}

int sumOfAllDivisors(int n)
{
    int totalSum = 0;

    for (int i = 1; i <= n; i++)
    {
        totalSum += helper(i);
    }

    return totalSum;
}