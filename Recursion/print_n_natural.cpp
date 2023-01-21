#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + c
// Time complexity --> O(n)
// Auxilary space --> O(n)
void print(int n){
    if(n == 0) return;
    print(n - 1);
    cout << n << endl;
}

int main()
{
    // This function prints first n natural numbers in increasing order
    print(5);
    return 0;
}
