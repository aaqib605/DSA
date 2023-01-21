#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + O(1)
// Time complexity --> O(n), n being the size of the array
// Auxilary space --> O(n)
bool isPresent(int arr[], auto size, int key){
    if(size == 0) return 0;
    if(arr[0] == key) return 1;
    return isPresent(arr + 1, size - 1, key);
}

int main()
{
    // Function checks if the key is present in the array
    int arr[] = {1, 2, 8, 9, 2};
    auto n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    cout << isPresent(arr, n, key) << endl;
    return 0;
}
