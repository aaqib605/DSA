vector<int> countFrequency(int n, int x, vector<int> &nums)
{

    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {

        if (nums[i] <= n)
        {
            arr[nums[i] - 1] += 1;
        }
    }

    return arr;
}