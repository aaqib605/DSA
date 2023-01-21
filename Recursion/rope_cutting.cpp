#include <iostream>
using namespace std;

// Recurrence relation --> T(n) = 3T(n - 1) + O(1)
// Time complexity --> O(3^n)
// Auxilary space --> O(n)
int cutRope(int n, int a, int b, int c){
    if(n == 0) return 0;
    if(n < 0) return -1;

    int res = max(max(cutRope(n - a, a, b, c), cutRope(n - b, a, b, c)), cutRope(n - c, a, b, c));

    if(res == -1) return -1;
    return res + 1;
}

int main() {
    // Rope cutting problem
    cout << cutRope(23, 11, 9, 12) << endl;
    return 0;
}
