#include <iostream>
using namespace std;

// Time complexity --> O(logN), base 10
// Auxilary space --> O(logN)
int getDigitSum(int n){
    if(n == 0) return 0;
    return (n % 10) + getDigitSum(n/10);
}

int main()
{
    // Function returns the sum of digits
    cout << getDigitSum(1202) << endl;
    return 0;
}
