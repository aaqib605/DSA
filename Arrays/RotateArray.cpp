vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    for (int i = 1; i <= (k % n); i++)
    {
        int firstElement = arr[0];
        for (int j = 0; j < (n - 1); j++)
        {
            arr[j] = arr[j + 1];
        }

        arr[n - 1] = firstElement;
    }

    return arr;
}
