#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void pairSum(int arr[], auto n, int sum){
    int i = 0, j = n - 1;
    while(i < j){
        if(arr[i] + arr[j] == sum){
            cout << arr[i++] << " + " << arr[j--] << " = " << sum << endl;
        }
        else if(arr[i] + arr[j] > sum){
            j--;
        }
        else if(arr[i] + arr[j] < sum){
            i++;
        }
    }
}


int main() {
    // Function prints the pair of elements with a given sum in a sorted array
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    pairSum(arr, n, sum);
    return 0;
}
