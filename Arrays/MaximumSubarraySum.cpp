long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxSum = 0;
    long long currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];

        maxSum = max(maxSum, currSum);

        if (currSum < 0)
            currSum = 0;
    }

    return maxSum;
}