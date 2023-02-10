#include <iostream>
#include "vector"
using namespace std;

// Time complexity --> O(log n)
// Auxilary Space --> O(1)

int pow(int a, int b){
    int res = 1;
    while(b){
        if(b & 1){
            res *= a;
        }
        a *= a;
        b >>= 1;
    }
    return res;
}

int main() {
    // Function implements pow(a, b) (Considering binary representation of b)
    cout << pow(3, 4) << endl;
    return 0;
}
