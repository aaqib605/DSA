#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)
 
int findRepeating(int arr[], auto n){
    int slow = arr[0];
    int fast = arr[0];
    
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    while(slow != fast);
    
    slow = arr[0];
    
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    
    return slow;
}
 

int main() {
    // Function returns the repeating element from the array(Floyd's Cycle Detection)
    int arr[] = {1, 3, 4, 2, 2};
    auto n = sizeof(arr) / sizeof(int);
    cout << findRepeating(arr, n) << endl;
    return 0;
}
