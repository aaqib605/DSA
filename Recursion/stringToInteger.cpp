#include <iostream>
using namespace std;

// Time complexity --> O(n)
// Auxilary space --> O(n)

int strInteger(string str, int index){
    static int ans = 0;
    if(index == str.length()) return ans;
    int digit = str[index] - '0';
    ans = ans * 10 + digit;
    return strInteger(str, index + 1);
}

int main()
{
    // This function convers the string into the number
    string str = "234";
    cout << strInteger(str, 0) << endl;
    return 0;
}
