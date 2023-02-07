#include <iostream>
#include "string"
using namespace std;

// Time complexity --> O(n)
// Auxilary Space --> O(n)

bool areAnagram(string &str1, string &str2){
    if(str1.length() != str2.length()) return false;
    
    char ch[25] = "\0";
    for(auto elem: str1){
        ch[elem - 'a']++;
    }
    for(auto elem: str2){
        ch[elem - 'a']--;
    }

    for(auto elem: ch){
        if(elem > 0) return false;
    }
 
    return true;

}

int main() {
    // Function checks if the strings are anagrams
    string str1 = "silent";
    string str2 = "listen";
    cout << areAnagram(str1, str2) << endl;
    return 0;
}
