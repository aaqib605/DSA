#include <iostream>
using namespace std;

bool isInterleaving(string str1, string str2, string str3, int j, int k, int l){
    if(str1.length() + str2.length() != str3.length()) return false;
    if(l == str3.length()){
        if(j == str1.length() && k == str2.length()) return true;
    }
    
    if(str3[l] == str1[j] && str3[l] == str2[k]){
        return isInterleaving(str1, str2, str3, j + 1, k, l + 1) || isInterleaving(str1, str2, str3, j, k + 1, l + 1);
    }
    else if(str1[j] == str3[l]){
        return isInterleaving(str1, str2, str3, j + 1, k, l + 1);
    }
    else if(str2[k] == str3[l]){
        return isInterleaving(str1, str2, str3, j, k + 1, l + 1);
    }
    return false;
}


int main() {
    // Function checks if the string is an interleaving of the given two strings
    string str1 = "xy", str2 = "x", str3 = "xxy";
    cout << isInterleaving(str1, str2, str3, 0, 0, 0) << endl;
    return 0;
}
