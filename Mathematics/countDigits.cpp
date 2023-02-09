#include <iostream>
using namespace std;

// Time complexity --> O(n)
// Auxilary Space --> O(1)

int countDigits(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    // Function returns the number of digits in a number
    cout << countDigits(123) << endl;
    return 0;
}
