#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + O(1)
// Time complexity --> O(n), n being the size of the array
// Auxilary space --> O(n)
int arrSum(int arr[], auto size){
    if(size == 0) return 0;
    return arr[0] + arrSum(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 8, 9, 2};
    auto n = sizeof(arr) / sizeof(arr[0]);
    // Function returns the sum of an array
    cout << arrSum(arr, n) << endl;
    return 0;
}
