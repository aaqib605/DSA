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


// Space Complexity --> O(n)
// Auxilary space --> O(n)
int func5(int n){
    if(n <= 1) return n;
    return n + func5(n - 1);
}


// Space Complexity --> O(n)
// Auxilary space --> O(n)
int func6(int n){
    if(n == 0 || n == 1) return n;
    return func6(n-1) + func6(n - 2);
}

// Space Complexity --> O(n)
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

// Space Complexity --> O(1)
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

int main() {
    int n;
    cin >> n;
    int arr[] = {1,2,3,4,5};
    
    cout << func1(n) << endl;
    cout << func2(n) << endl;
    cout << func3(arr, n) << endl;
    cout << func4(arr, n) << endl;
    cout << func5(n) << endl;
    cout << func6(n) << endl;
    cout << func7(n) << endl;
    cout << func8(n) << endl;
    return 0;
}
