#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + c
// Time complexity --> O(n), n being size of the array
// Auxilary space --> O(n)
int sumN(int n){
    if(n <= 1) return n;
    return n + sumN(n - 1);
}

int main()
{
    // This function return the sum of first n natural numbers
    cout << sumN(5) << endl;
    return 0;
}
