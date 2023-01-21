#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n), n being the number of digits
// Auxilary space --> O(1)
int getZero(int n){
    static int zeroes = 0;
    if(n == 0) return zeroes;
    if(n % 10 == 0) zeroes += 1;
    return getZero(n/10);
}

int main()
{
    // Function checks returns the number of zeroes in a number
    cout << getZero(708000) << endl;
    return 0;
}
