#include <iostream>

using namespace std;
// Time complexity --> O(1)
// Auxilary Space --> O(1)

bool isPowerOf2(int n){
    if(n <= 0) return false;
    if((n & (n - 1)) == 0) return true;
    return false;
}

int main(){
    // Function checks if the number is power of 2
    cout << isPowerOf2(8) << endl;
    return 0;
}
