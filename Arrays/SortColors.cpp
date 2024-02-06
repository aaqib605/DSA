class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int left = 0;      // pointer for 0
        int right = n - 1; // pointer for 2

        for (int i = 0; i <= right; i++)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[left]);
                left++;
            }
            else if (nums[i] == 2)
            {
                swap(nums[i], nums[right]);
                right--;
                i--; // recheck the current position since it could be 0 or 1 now
            }
        }
    }
};