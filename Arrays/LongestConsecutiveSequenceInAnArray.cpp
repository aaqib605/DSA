class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int currLength = 0;
        int maxLength = 0;
        int elementBefore = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == elementBefore + 1)
            {
                currLength++;
            }
            else if (nums[i] == elementBefore)
            {
                continue;
            }
            else
            {
                currLength = 1;
            }

            maxLength = max(maxLength, currLength);
            elementBefore = nums[i];
        }

        return maxLength;
    }
};