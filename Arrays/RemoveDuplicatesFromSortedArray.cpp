int removeDuplicates(vector<int> &arr, int n)
{
    if (n == 1)
        return 1;

    int uniqueArrLen = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[uniqueArrLen] = arr[i];
            uniqueArrLen++;
        }
    }

    return uniqueArrLen;
}