class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int arr[], int n)
    {
        vector<int> ans;
        int max = INT_MIN;

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= max)
            {
                ans.push_back(arr[i]);
                max = arr[i];
            }
        }

        int start = 0;
        int end = ans.size() - 1;

        while (start < end)
        {
            swap(ans[start], ans[end]);
            start++;
            end--;
        }

        return ans;
    }
};