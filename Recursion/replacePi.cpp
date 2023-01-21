#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n)
// Auxilary space --> O(n)

string replacePi(string str){
    if(str.length() <= 1) return str;
    char ch = str[0];
    string smallOutput = replacePi(str.substr(1));
    
    if(ch == 'p' && smallOutput[0] == 'i'){
       return "3.14" + smallOutput.substr(1);
    }
    else{
        return ch + smallOutput;
    }
}

int main()
{
    // Function replaces pi in a string with 3.14
    string str = "apiXpi";
    cout << replacePi(str) << endl;
    return 0;
}
