int getFloor(vector<int> arr, int n, int x)
{
    int floor = -1;
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] <= x)
        {
            floor = arr[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return floor;
}

int getCeil(vector<int> arr, int n, int x)
{
    int ceil = -1;
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= x)
        {
            ceil = arr[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ceil;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    pair<int, int> floorAndCeil;

    floorAndCeil.first = getFloor(a, n, x);
    floorAndCeil.second = getCeil(a, n, x);

    return floorAndCeil;
}