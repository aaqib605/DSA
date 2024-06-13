class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int insertPos = 0;
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;

            if (target > nums[mid])
            {
                insertPos = mid + 1;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return insertPos;
    }
};