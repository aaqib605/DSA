vector<int> generateFibonacciNumbers(int n)
{
    vector<int> fibNums;
    if (n == 1)
        return {0};
    if (n == 2)
        return {0, 1};

    fibNums = generateFibonacciNumbers(n - 1);
    fibNums.push_back(fibNums[n - 2] + fibNums[n - 3]);
    return fibNums;
}