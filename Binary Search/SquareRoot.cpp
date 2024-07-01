class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        long long int squareRoot = 1;
        long long int start = 1;
        long long int end = x;

        while (start <= end)
        {
            long long int mid = start + (end - start) / 2;

            if (mid * mid <= x)
            {
                squareRoot = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return squareRoot;
    }
};