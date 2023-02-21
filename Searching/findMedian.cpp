#include <iostream>
#include "vector"
using namespace std;

// Time Complexity --> O(min(log n1, log n2)
// Auxilary Space --> O(1)
 
double findMedianSortedArrays(vector<int> arr1, vector<int> arr2){
    if(arr1.size() > arr2.size()){
        swap(arr1, arr2);
    }
    
    auto n1 = arr1.size();
    auto n2 = arr2.size();
    
    auto low = 0;
    auto high = n1;
    
    while(low <= high){
        auto cut1 = low + (high - low) / 2;
        auto cut2 = ((n1 + n2 + 1) / 2) - cut1;
        
        auto left1 = (cut1 == 0) ? INT_MIN : arr1[cut1 - 1];
        auto left2 = (cut2 == 0) ? INT_MIN : arr2[cut2 - 1];
        
        auto right1 = (cut1 == n1) ? INT_MAX : arr1[cut1];
        auto right2 = (cut2 == n2) ? INT_MAX : arr2[cut2];
        
        if(left1 <= right2 && left2 <= right1){
            if((n1 + n2) % 2 == 0){
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            }
            else{
                return max(left1, left2);
            }
        }
        else if(left1 > right2){
            high = cut1 - 1;
        }
        else{
            low = cut1 + 1;
        }
    }
    return 0.0;
}
 

int main() {
    // Function returns the median of two sorted arrays
    vector<int> arr1 = {1, 3, 8, 9};
    vector<int> arr2 = {2, 7, 10}; 
    cout << findMedianSortedArrays(arr1, arr2) << endl;
    return 0;
}
