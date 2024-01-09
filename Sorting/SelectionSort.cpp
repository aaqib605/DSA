void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minElementIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minElementIndex])
            {
                minElementIndex = j;
            }
        }

        swap(arr[i], arr[minElementIndex]);
    }
}