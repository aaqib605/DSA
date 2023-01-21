#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + c
// Time complexity --> O(n)
// Auxilary space --> O(n)
int fact(int n){
    if(n <= 1) return 1;
    return n * fact(n - 1);
}

int main()
{
    // This function returns the factorial of a number
    cout << fact(4) << endl;
    return 0;
}
