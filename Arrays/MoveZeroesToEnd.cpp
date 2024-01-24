vector<int> moveZeros(int n, vector<int> arr)
{
    int nonZeroIndex = 0; // index where the next non-zero element should be placed

    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] != 0)
        {
            if (nonZeroIndex != i)
            {
                swap(arr[nonZeroIndex], arr[i]);
            }
            nonZeroIndex++;
        }
    }

    return arr;
}
