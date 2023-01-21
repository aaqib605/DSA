#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n), n being the size of the array
// Auxilary space --> O(n)
int firstOccurence(int arr[], auto size, int key, int index){
    if(size == 0) return -1;
    if(arr[0] == key) return index;
    return firstOccurence(arr + 1, size - 1, key, index + 1);
}

int main()
{
    // Function checks returns the first occurence(index) of the element
    int arr[] = {1, 2, 8, 9, 2};
    auto n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    cout << firstOccurence(arr, n, key, 0) << endl;
    return 0;
}
