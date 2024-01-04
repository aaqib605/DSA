long long findFactorial(long long int num)
{
    long long factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

vector<long long> factorialNumbers(long long n)
{
    vector<long long> result;
    for (int i = 1; i <= n; i++)
    {
        long long factorial = findFactorial(i);
        if (factorial <= n)
        {
            result.push_back(factorial);
        }
        else
        {
            break;
        }
    }
    return result;
}