#include <iostream>
#include "vector"
using namespace std;

// Time Complexity --> O(n1 + n2)
// Auxilary Space --> O(1)

void unionArr(int arr1[], auto n1, int arr2[], auto n2, vector<int> &ans){
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    
    while(i < n1){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j < n2){
        ans.push_back(arr2[j]);
        j++;
    }
}


int main() {
    // Function implements union of two sorted arrays
    int arr1[] = {1, 3, 6, 9, 10};
    auto n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 5, 6, 11, 12, 18, 20};
    auto n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> ans;
    unionArr(arr1, n1, arr2, n2, ans);
    
    for(auto elem: ans){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
