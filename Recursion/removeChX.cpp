#include <iostream>
#include <math.h>
using namespace std;


void removeX(char s[]){
    if(s[0] == '\0') return;
    
    if(s[0] != 'X'){
        removeX(s + 1);
    }
    else{
        int i = 1;
        for(; s[i] != '\0'; i++){
            s[i - 1] = s[i];
        }
        s[i - 1] = '\0';
        removeX(s);
    }
}

int main()
{
    // Function removes the char 'X' from the string
    char ch[100];
    cin >> ch;
    removeX(ch);
    cout << ch << endl;
    return 0;
}
