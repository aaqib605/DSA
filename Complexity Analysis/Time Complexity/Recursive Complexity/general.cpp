#include <iostream>
#include <math.h>
using namespace std;

// Space Complexity --> O(1)
int func1(int n){
    return (n * (n + 1)) / 2;
}

// Space Complexity --> O(1)
int func2(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

// Space Complexity --> O(n)
int func3(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

// Space Complexity --> O(n)
// Auxilary space --> O(1)
int func4(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}


// -----------------****---------------

// MergeSort Algo
// Space complexity --> O(n)
// Auxilary space --> O(n)

// BubbleSort, InsertionSort, SelectionSort
// Space complexity --> O(n)
// Auxilary space --> O(1)
 
// -----------------****---------------



// Auxilary space --> O(n)
int func5(int n){
    if(n <= 1) return n;
    return n + func5(n - 1);
}


// Auxilary space --> O(n)
int func6(int n){
    if(n == 0 || n == 1) return n;
    return func6(n-1) + func6(n - 2);
}


// Auxilary space --> O(n)
int func7(int n){
    int arr[n+1];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= n; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}


// Auxilary space --> O(1)
int func8(int n){
    if(n == 0 || n == 1) return n;
    
    int a = 0;
    int b = 1;
    int c = NULL;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

void merge(int arr[], int s, int e){
    int mid = s + (e - s) / 2;
    int size = (e - s) + 1;
    
    int *output = new int[size];
    
    
    int i = s;
    int j = mid + 1;
    int k = 0;
    
    while(i <= mid && j <= e){
        if(arr[i] <= arr[j]){
            output[k++] = arr[i++];
        }
        else{
            output[k++] = arr[j++];
        }
    }
    
    while(i <= mid){
        output[k++] = arr[i++];
    }
    while(j <= e){
        output[k++] = arr[j++];
    }
    
    int m = 0;
    for(int i = s; i <= e; i++){
        arr[i] = output[m++];
    }
    
    delete[] output;
}

// Recurrence relation --> T(n) = T(n/2) + T(n/2) + cn
// Time Complexity --> O(nlogN)
// Auxilary Space Complexity --> O(n) + O(logN) = O(n)
 
void mergeSort(int arr[], int s, int e){
    if(s >= e) return;
    
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    
    merge(arr, s, e);
}
 

int main() {
    int n;
    cin >> n;
    int arr[] = {6,5,12,10,9,1};
    int m = sizeof(arr) / sizeof(arr[0]);
    
    cout << func1(n) << endl;
    cout << func2(n) << endl;
    cout << func3(arr, n) << endl;
    cout << func4(arr, n) << endl;
    cout << func5(n) << endl;
    cout << func6(n) << endl;
    cout << func7(n) << endl;
    cout << func8(n) << endl;
    mergeSort(arr, 0, m-1);
    
    
    
    return 0;
}
