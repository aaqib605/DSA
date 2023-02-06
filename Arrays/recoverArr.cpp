#include <iostream>
#include <vector>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(1)

void recoverArr(int arr[], auto n, vector<int> &res){
    int mid = n / 2;
    int left, right;
    int i = 0;
    
    if(n % 2 != 0){
        left = mid - 1;
        right = mid + 1;
        res[mid] = arr[0];
        i++;
    }
    else if(n % 2 == 0){
        left = mid - 1;
        right = mid;
    }
    
    while(i < n){
        res[left] = arr[i];
        left--;
        i++;
        res[right] = arr[i];
        right++;
        i++;
    }
    
}

int main() {
    // Function recovers the original array from an array which was created by picking the mid element
    int arr[] = {3, 4, 2, 5, 1, 6};
    auto n = sizeof(arr) / sizeof(int);
    vector<int> res(n, 0);
    recoverArr(arr, n, res);

    for(auto elem: res){
        cout << elem << " ";
    }
    cout << endl;
    
    return 0;
}
