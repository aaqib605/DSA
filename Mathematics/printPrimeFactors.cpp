#include <iostream>
using namespace std;

// Time complexity --> O(sqrt(n))
// Auxilary Space --> O(1)

void primeFactors(int n){
    if(n <= 1) return;
    
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    
    if(n > 1){
        cout << n << endl;
    }
}

int main() {
    // Function prints the prime factors of the given number
    primeFactors(84);
    return 0;
}
