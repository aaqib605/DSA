class Solution
{
public:
    int findKRotation(int arr[], int n)
    {
        int start = 0;
        int end = n - 1;
        int ans = 0;
        int minElement = INT_MAX;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[start] <= arr[mid])
            {
                if (arr[start] < minElement)
                {
                    minElement = arr[start];
                    ans = start;
                }

                start = mid + 1;
            }
            else
            {
                if (arr[mid] < minElement)
                {
                    minElement = arr[mid];
                    ans = mid;
                }

                end = mid - 1;
            }
        }

        return ans;
    }
};
`