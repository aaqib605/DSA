#include <iostream>
using namespace std;

// Time complexity --> O(sqrt(n))
// Auxilary Space --> O(1)

void printDivisors(int n){
    int i;
    for(i = 1; i * i < n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    for(; i >= 1; i--){
        if(n % i == 0){
            cout << (n / i) << " ";
        }
    }
    
    cout << endl;
}

int main() {
    // Function prints all the divisors of a given number
    printDivisors(15);
    return 0;
}
