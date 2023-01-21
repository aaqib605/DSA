#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n)
// Auxilary space --> O(n)
int fib(int n){
    static int *arr = new int[n];
    for(int i = 0; i < n; i++){
        arr[i] = -1;
    }
    arr[0] = 0;
    arr[1] = 1;
    
    if(n <= 1) return arr[n];
    if(arr[n - 1] == -1){
        arr[n - 1] = fib(n - 1);
    }
    if(arr[n - 2] == -1){
        arr[n - 2] = fib(n - 2);
    }
    return arr[n - 1] + arr[n - 2];
}

int main()
{
    // Fibonacci series using memoization
    cout << fib(6) << endl;
    return 0;
}
