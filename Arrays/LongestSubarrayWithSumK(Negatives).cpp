#include <bits/stdc++.h>
int getLongestSubarray(vector<int> &arr, int k)
{
    unordered_map<int, int> mpp;
    int prefixSum = 0;
    int maxLength = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];

        if (prefixSum == k)
        {
            maxLength = i + 1;
        }

        if (mpp.find(prefixSum - k) != mpp.end())
        {
            maxLength = max(maxLength, i - mpp[prefixSum - k]);
        }

        if (mpp.find(prefixSum) == mpp.end())
        {
            mpp[prefixSum] = i;
        }
    }

    return maxLength;
}