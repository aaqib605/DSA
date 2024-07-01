class Solution
{
public:
    int lastOccurence(int arr[], int n, int key)
    {
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

    int firstOccurence(int arr[], int n, int key)
    {
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

    int count(int arr[], int n, int key)
    {
        int firstOccurenceIndex = firstOccurence(arr, n, key);
        int lastOccurenceIndex = lastOccurence(arr, n, key);

        if (firstOccurenceIndex == -1 || lastOccurenceIndex == -1)
            return 0;

        return (lastOccurenceIndex - firstOccurenceIndex) + 1;
    }
};