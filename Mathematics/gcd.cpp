#include <iostream>
using namespace std;

// Time complexity --> O(log(min(a, b))
// Auxilary Space --> O(1)

int hcf(int a, int b){
    if(b == 0) return a;
    return hcf(b, a % b);
}

int main() {
    // Function calculates the hcf ( gcd(a, b) = gcd(a - b, b) )
    cout << hcf(12, 15) << endl;
    return 0;
}
