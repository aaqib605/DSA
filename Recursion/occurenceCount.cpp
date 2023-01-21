#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n), n being the size of the array
// Auxilary space --> O(n)
auto occurenceCount(int arr[], auto size, int key, int index, vector<int> &res){
    if(size == 0) return res.size();
    if(arr[0] == key) res.push_back(index);
    return occurenceCount(arr + 1, size - 1, key, index + 1, res);
}

int main()
{
    // Function checks returns the no of occurences of an element
    int arr[] = {1, 2, 4, 2, 2};
    auto n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    vector<int> res;
    cout << occurenceCount(arr, n, key, 0, res) << endl;
    return 0;
}
