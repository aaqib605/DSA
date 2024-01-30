int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int left = 0;
    int right = 0;
    int maxLength = 0;
    long long sum = a[0];
    int n = a.size();

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        if (sum == k)
        {
            maxLength = max(maxLength, right - left + 1);
        }

        right++;
        if (right < n)
        {
            sum += a[right];
        }
    }

    return maxLength;
}