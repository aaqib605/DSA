class Solution
{
public:
    int findMax(vector<int> &piles)
    {
        int maxEl = INT_MIN;

        for (int i = 0; i < piles.size(); i++)
        {
            maxEl = max(maxEl, piles[i]);
        }

        return maxEl;
    }

    long long calculateTotalHours(vector<int> &piles, int hourly)
    {
        long long hoursTaken = 0;

        for (int i = 0; i < piles.size(); i++)
        {
            hoursTaken += ceil(double(piles[i]) / (double)hourly);
        }

        return hoursTaken;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int size = piles.size();
        int start = 1;
        int end = findMax(piles);
        int ans = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            long long hoursTaken = calculateTotalHours(piles, mid);

            if (hoursTaken <= h)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return ans;
    }
};