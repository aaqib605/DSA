class Solution
{
public:
    void allPermutations(int index, vector<int> nums, vector<vector<int>> &ans)
    {
        // Base Case
        if (index == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[i], nums[index]);
            allPermutations(index + 1, nums, ans);
            swap(nums[i], nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        allPermutations(0, nums, ans);
        return ans;
    }
};