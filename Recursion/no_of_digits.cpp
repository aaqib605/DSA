#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n/10) + c
// Time complexity --> O(logN) with base 10
// Auxilary space --> O(logN) with base 10
int getDigits(int n){
    if(n <= 9) return 1;
    return getDigits(n/10) + 1;
}

int main()
{
    // This function returns the no of digits in n
    cout << getDigits(435) << endl;
    return 0;
}
