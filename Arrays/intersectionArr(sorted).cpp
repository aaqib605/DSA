#include <iostream>
#include <vector>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void intersectionArr(int arr1[], auto n1, int arr2[], auto n2, vector<int> &ans){
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
    }
}


int main() {
    // Function implements the intersection of two sorted arrays
    int arr1[] = {11, 18, 20, 26, 41, 50};
    auto n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {2, 9, 14, 20, 50, 65};
    auto n2 = sizeof(arr2) / sizeof(int);
    vector<int> ans;
    
    intersectionArr(arr1, n1, arr2, n2, ans);
    
    for(auto elem: ans){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
