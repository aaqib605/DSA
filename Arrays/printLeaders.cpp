#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)


void printLeaders(int arr[], auto n){
    int currLeader = arr[n - 1];
    cout << currLeader << " ";
    for(int i = n - 2; i >= 0; i--){
        if(currLeader < arr[i]){
            currLeader = arr[i];
            cout << currLeader << " ";
        }
    }
    cout << endl;
}


int main() {
    // Function prints the leaders of an array
    int arr[] = {16, 17, 4, 3, 5, 2};
    auto n = sizeof(arr) / sizeof(int);
    printLeaders(arr, n);
    return 0;
}
