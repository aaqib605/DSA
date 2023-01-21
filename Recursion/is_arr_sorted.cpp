#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + c
// Time complexity --> O(n), n being size of the array
// Auxilary space --> O(n)
bool isSorted(int arr[], auto size){
    if(size == 0 || size == 1) return 1;
    if(arr[0] > arr[1]) return 0;
    
    return isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    auto n = sizeof(arr) / sizeof(arr[0]);
    // This function checks if the array is sorted
    cout << isSorted(arr, n) << endl;
    return 0;
}
