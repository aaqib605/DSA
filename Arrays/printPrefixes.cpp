#include <iostream>
#include "cstring"
using namespace std;

// Time complexity --> O(n^2)
// Auxilary Space --> O(1)

void printPrefixes(char ch[], auto n){
    for(int i = 0; ch[i] != '\0'; i++){
        for(int j = 0; j <= i; j++){
            cout << ch[j];
        }
        cout << endl;
    }
}

int main() {
    // Function prints all the prefixes of the string
    char ch[] = "abcd";
    printPrefixes(ch, strlen(ch));
    return 0;
}
