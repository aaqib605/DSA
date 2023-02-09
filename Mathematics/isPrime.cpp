#include <iostream>
using namespace std;

// Time complexity --> O(sqrt(n))
// Auxilary Space --> O(1)

bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    // Function checks if the number is prime or not
    cout << isPrime(101) << endl;
    return 0;
}
