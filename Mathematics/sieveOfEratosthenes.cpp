#include <iostream>
#include "vector"
using namespace std;

// Time complexity --> O(n log log n)
// Auxilary Space --> O(n)

void printPrimes(int n){
    vector<bool> isPrime(n + 1, true);
    for(int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    
    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    // Function prints all the prime numbers till given number (Sieve of Eratosthenes)
    printPrimes(23);
    return 0;
}
