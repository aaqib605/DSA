#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

int maxProfit(int arr[], auto n){
    int profit = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1]){
            profit += (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}


int main() {
    // Function returns the max profit (Stock Buy and Sell)
    int arr[] = {1, 5, 3, 8, 12};
    auto n = sizeof(arr) / sizeof(arr[0]);
    cout << maxProfit(arr, n) << endl;
    
    return 0;
}
