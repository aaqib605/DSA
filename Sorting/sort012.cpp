#include <iostream> 
using namespace std;

// Time complexity --> O(n)
// Auxilary Space --> O(1)

void sort(int arr[], auto size){
    int low = 0;
    int mid = 0;
    auto high = size - 1;
    
    while(mid <= high){
        switch(arr[mid]){
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

int main() {
    // Function sorts (0,1,2)
    int arr[] = {1, 0, 2, 0, 0, 1, 1, 2, 0, 1};
    auto size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
