#include <iostream>
using namespace std;

// Time complexity --> O(n)
// Auxilary space --> O(n)
void replaceChar(char ch_arr[], char replace, char replace_by){
    if(ch_arr[0] == '\0') return;
    if(ch_arr[0] == replace){
        ch_arr[0] = replace_by;
    }
    replaceChar(ch_arr + 1, replace, replace_by);
}

int main()
{
    // Function replaces a certain character by a given character
    char ch_arr[100];
    cin >> ch_arr;
    char replace = 'x';
    char replace_by = 'O';
    replaceChar(ch_arr, replace, replace_by);
    cout << ch_arr << endl;
    return 0;
}
