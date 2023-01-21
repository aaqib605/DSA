#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n), n being the size of the array
// Auxilary space --> O(n)
auto lastOccurence(int arr[], auto size, int key, int index){
    static int res = -1;
    if(size == 0) return res;
    if(arr[0] == key) res = index;
    return lastOccurence(arr + 1, size - 1, key, index + 1);
}

int main()
{
    // Function checks returns last occurence(index)
    int arr[] = {1, 2, 4, 2, 2};
    auto n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    cout << lastOccurence(arr, n, key, 0) << endl;
    return 0;
}
