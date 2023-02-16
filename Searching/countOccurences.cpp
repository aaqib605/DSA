#include <iostream>
using namespace std;

// Time complexity --> O(logN)
// Auxilary Space --> O(1)

int firstOccurence(int arr[], int start, auto end, int key){
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        
        if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
    }
    
    return ans;
}

int lastOccurence(int arr[], int start, auto end, int key){
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        
        if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
    }
    
    return ans;
}

int countOccurences(int arr[], int start, auto end, int key){
    int first = firstOccurence(arr, start, end, key);
    int last = lastOccurence(arr, start, end, key);
    
    if(first == -1 || last == -1) return 0;
    
    return (last - first) + 1;
}

int main(){
    // Function returns the count of occurences of an element in an array
    int arr[] = {1, 10, 10, 10, 20, 20, 20, 30};
    auto n = sizeof(arr) / sizeof(int);
    int key = 20;
    cout << countOccurences(arr, 0, n - 1, key) << endl;
    return 0;
}
