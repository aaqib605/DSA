#include <iostream>
#include "string"
using namespace std;

// Time complexity --> O(n)
// Auxilary Space --> O(1)

void helper(string &str, int start, int end){
    while(start <= end){
        swap(str[start++], str[end--]);
    }
}

void reverseWord(string &str, auto n){
    int i = 0;
    while(i < n){
        while(str[i] == '.') i++;
        int j = i + 1;
        while(str[j] != '.' && j < n) j++;
        helper(str, i, j - 1);
        i = j + 1;
        while(str[i] == '.') i++;
    }
}

int main() {
    // Function reverses every word in a string
    string str = ".sju.hrzler.vqkxnmmln..sw.";
    reverseWord(str, str.length());
    
    cout << str << endl;
    return 0;
}
