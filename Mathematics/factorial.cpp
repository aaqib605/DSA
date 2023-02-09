#include <iostream>
using namespace std;

// Time complexity --> O(n)
// Auxilary Space --> O(1)

int fact(int n){
    int ans = 1;
    for(int i = 2; i <= n; i++){
        ans *= i;
    }
    return ans;
}

int main() {
    // Function returns the factorial of a number
    cout << fact(4) << endl;
    return 0;
}
