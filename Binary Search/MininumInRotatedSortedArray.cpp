class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        int minElement = INT_MAX;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[start] <= nums[mid])
            {
                if (nums[start] < minElement)
                {
                    minElement = nums[start];
                }
                start = mid + 1;
            }
            else
            {
                if (nums[mid] < minElement)
                {
                    minElement = nums[mid];
                }
                end = mid - 1;
            }
        }

        return minElement;
    }
};