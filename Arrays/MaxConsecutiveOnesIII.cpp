class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int left = 0;      // left pointer of the sliding window
        int zeroCount = 0; // count of zeros within the sliding window
        int maxLen = 0;    // maximum length of consecutive 1s

        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right] == 0)
                zeroCount++;

            // If zero count exceeds k, move the left pointer to maintain at most k zeros in the window
            while (zeroCount > k)
            {
                if (nums[left] == 0)
                    zeroCount--;
                left++;
            }

            // Update the maximum length
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};