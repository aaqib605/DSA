class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;

            // left part is sorted
            if (nums[start] <= nums[mid])
            {
                // if target exists in left sorted part, eliminate the right part
                if (target >= nums[start] && target <= nums[mid])
                {
                    end = mid - 1;
                }
                else
                { // target exists in the right part so eliminate the left part
                    start = mid + 1;
                }
            }
            else
            { // right part is sorted
                if (target >= nums[mid] && target <= nums[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }

        return ans;
    }
};