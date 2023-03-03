#include <iostream>
using namespace std;

// Time Complexity --> O(n log n)
// Auxilary Space --> O(n)


int minDiff(int arr[], auto n){
    if(n == 1) return INT_MAX;
    
    sort(arr, arr + n);
    
    int i = 0;
    int j = i + 1;
    int ans = INT_MAX;
    
    while(j < n){
        ans = min(ans, (arr[j] - arr[i]));
        i++;
        j++;
    }
    
    return ans;
}



int main() {
    // Function returns the minimum difference in an array
    int arr[] = {1, 8, 12, 5, 18};
    auto n = sizeof(arr) / sizeof(int);
    
    cout << minDiff(arr, n) << endl;
    return 0;
}
