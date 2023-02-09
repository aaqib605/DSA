#include <iostream>
using namespace std;

// Time complexity --> O(log n)
// Auxilary Space --> O(1)

int trailingZeroes(int n){
    int res = 0;
    for(int i = 5; i <= n; i *= 5){
        res += n / i;
    }
    return res;
}

int main() {
    // Function returns the count of trailing zeroes in the factorial of a number
    cout << trailingZeroes(23) << endl;
    return 0;
}
