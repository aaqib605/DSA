#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n)
{
    int largestElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        largestElement = max(largestElement, arr[i]);
    }
    return largestElement;
}
