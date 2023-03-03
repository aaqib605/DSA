#include <iostream>
using namespace std;

// Time Complexity --> O(n log n)
// Auxilary Space --> O(1)


int chocolateDistribution(int arr[], auto n, int m){
    sort(arr, arr + n);
    
    int i = 0;
    int j = m - 1;
    int ans = INT_MAX;
    
    while(i < n && j < n){
        ans = min(ans, (arr[j] - arr[i]));
        i++;
        j++;
    }
    
    return ans;
}



int main() {
    // Function returns the minimun difference between the (min and max) number of chocolates distributed among "m" children
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    auto n = sizeof(arr) / sizeof(int);
    int m = 5;
    cout << chocolateDistribution(arr, n, m) << endl;
    return 0;
}
