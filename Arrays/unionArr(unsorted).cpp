#include <iostream>
#include "vector"
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)

void unionArr(int arr1[], auto n1, int arr2[], auto n2, vector<int> &ans){
    for(int i = 0; i < n1; i++){
        ans.push_back(arr1[i]);
    }
    
    for(int i = 0; i < n2; i++){
        bool isPresent = false;
        for(int j = 0; j < n1; j++){
            if(arr2[i] == arr1[j]){
                isPresent = true;
            }
        }
        if(!isPresent){
            ans.push_back(arr2[i]);
        }
    }
}


int main() {
    // Function implements union of two unsorted arrays
    int arr1[] = {2, 9, 1, 6, 5, 11};
    auto n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {8, 2, 4, 5, 7, 20};
    auto n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> ans;
    unionArr(arr1, n1, arr2, n2, ans);
    
    for(auto elem: ans){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
