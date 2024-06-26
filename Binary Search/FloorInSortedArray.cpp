class Solution
{
public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x)
    {

        int start = 0;
        int end = n - 1;
        int floor = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] <= x)
            {
                floor = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return floor;
    }
};