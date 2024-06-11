class Solution
{
public:
    int recursiveBinarySearch(vector<int> nums, int start, int end, int target)
    {
        // base case
        if (start > end)
            return -1;

        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            return recursiveBinarySearch(nums, start, mid - 1, target);
        }
        else
        {
            return recursiveBinarySearch(nums, mid + 1, end, target);
        }
    }

    int search(vector<int> &nums, int target)
    {
        return recursiveBinarySearch(nums, 0, nums.size() - 1, target);
    }
};