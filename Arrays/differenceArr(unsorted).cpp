#include <iostream>
#include <vector>
using namespace std;

// Time Complexity --> O(n^2)
// Auxilary Space --> O(1)

void differenceArr(int arr1[], auto n1, int arr2[], auto n2, vector<int> &ans){
    for(int i = 0; i < n1; i++){
        bool isPresent = false;
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                isPresent = true;
            }
        }
        if(!isPresent){
            ans.push_back(arr1[i]);
        }
    }
}


int main() {
    // Function implements the difference of two unsorted arrays
    int arr1[] = {11, 18, 20, 26, 41, 50};
    auto n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {2, 9, 14, 20, 50, 65};
    auto n2 = sizeof(arr2) / sizeof(int);
    vector<int> ans;
    
    differenceArr(arr1, n1, arr2, n2, ans);
    
    for(auto elem: ans){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
