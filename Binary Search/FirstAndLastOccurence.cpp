class Solution
{
public:
    int lastOccurence(vector<int> arr, int key)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int lastOccurenceIndex = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key)
            {
                lastOccurenceIndex = mid;
                start = mid + 1;
            }
            else if (arr[mid] < key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return lastOccurenceIndex;
    }

    int firstOccurence(vector<int> arr, int key)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int firstOccurenceIndex = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key)
            {
                firstOccurenceIndex = mid;
                end = mid - 1;
            }
            else if (arr[mid] < key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return firstOccurenceIndex;
    }
    vector<int> searchRange(vector<int> &nums, int key)
    {
        int firstOccurenceIndex = firstOccurence(nums, key);
        int lastOccurenceIndex = lastOccurence(nums, key);

        return {firstOccurenceIndex, lastOccurenceIndex};
    }
};