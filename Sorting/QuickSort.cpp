// Function to partition the array and return the index of the pivot
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;

    // Continue until the left and right indices meet
    while (i < j)
    {
        // Find an element greater than the pivot on the left side
        while (arr[i] <= pivot && i < end)
        {
            i++;
        }

        // Find an element less than or equal to the pivot on the right side
        while (arr[j] > pivot && j > start)
        {
            j--;
        }

        // If there are elements on both sides that need to be swapped, swap them
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    // Move the pivot to its correct position in the sorted array
    swap(arr[start], arr[j]);

    // Return the index of the pivot
    return j;
}

// Function to perform Quick Sort on the array
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return; // Base case: If the array has 0 or 1 elements, it is already sorted
    }

    // Partition the array and get the index of the pivot
    int partitionIndex = partition(arr, start, end);

    // Recursively sort the subarrays on the left and right of the pivot
    quickSort(arr, start, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, end);
}