#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + T(n - 2) + c
// Time complexity --> O(2^n)
// Auxilary space --> O(n)
int fib(int n){
    if(n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // This function returns the nth fibonacci number
    cout << fib(6) << endl;
    return 0;
}
