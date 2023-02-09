#include <iostream>
using namespace std;

// Time complexity --> O(n)
// Auxilary Space --> O(1)

bool isPalindrome(int n){
    int copy = n;
    int revNum = 0;
    
    while(n){
        int digit = n % 10;
        revNum = revNum * 10 + digit;
        n /= 10;
    }
    
    return (revNum == copy);
}

int main() {
    // Function checks if the number is palindrome or not
    cout << isPalindrome(78987) << endl;
    return 0;
}
