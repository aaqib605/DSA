pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{

    int floor = INT_MIN;
    int ceil = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int currNum = arr[i];

        if (currNum <= x && currNum >= floor)
        {
            floor = currNum;
        }

        if (currNum >= x && currNum <= ceil)
        {
            ceil = currNum;
        }
    }

    if (floor == INT_MIN)
    {
        floor = -1;
    }

    if (ceil == INT_MAX)
    {
        ceil = -1;
    }

    return {floor, ceil};
}