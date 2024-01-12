void merge(vector<int> &arr, int l, int mid, int r)
{
    int sizeNewArr = r - l + 1;
    int newArr[sizeNewArr];

    int i = l;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            newArr[k++] = arr[i++];
        }
        else
        {
            newArr[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        newArr[k++] = arr[i++];
    }

    while (j <= r)
    {
        newArr[k++] = arr[j++];
    }

    k = 0;
    for (int i = l; i <= r; i++)
    {
        arr[i] = newArr[k++];
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;

    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    merge(arr, l, mid, r);
}