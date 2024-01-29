class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxConsecutiveOnes = 0;
        int currentOnes = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                currentOnes++;
            }
            else
            {
                currentOnes = 0;
            }

            maxConsecutiveOnes = max(maxConsecutiveOnes, currentOnes);
        }

        return maxConsecutiveOnes;
    }
};