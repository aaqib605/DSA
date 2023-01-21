#include <iostream>
#include <math.h>
using namespace std;

// Time complexity --> O(n), n being the length of a string
// Auxilary space --> O(n)
bool isPalindrome(string str, auto start, auto end){
    if(start >= end) return 1;
    if(str[start] != str[end]) return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    // Function checks if the string is palindrome
    string str = "madam";
    auto size = str.length();
    cout << isPalindrome(str, 0, size - 1) << endl;
    return 0;
}
