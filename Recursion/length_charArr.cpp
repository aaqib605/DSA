#include <iostream>
#include <math.h>
using namespace std;

// Time complexity --> O(n), n being the size of the string
// Auxilary space --> O(n)
int getLength(char s[]){
    if(s[0] == '\0') return 0;
    return 1 + getLength(s + 1);
}

int main()
{
    // Function returns the length of a char array(string)
    char s[100];
    cin >> s;
    cout << getLength(s) << endl;
    return 0;
}
