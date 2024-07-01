
class Solution
{
public:
    int NthRoot(int n, int m)
    {
        int start = 1;
        int end = m;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            long long int product = 1;
            for (int i = 1; i <= n; i++)
            {
                product *= mid;

                if (product > m)
                    break;
            }

            if (product == m)
                return mid;

            if (product < m)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return -1;
    }
};