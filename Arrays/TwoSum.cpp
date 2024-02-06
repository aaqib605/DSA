class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> res;
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            int reqEl = target - nums[i];

            if (map.find(reqEl) != map.end())
            {
                res.push_back(i);
                res.push_back(map[reqEl]);
                return res;
            }
            else
            {
                map.insert({nums[i], i});
            }
        }

        return res;
    }
};