#include <iostream>
using namespace std;

// Time complexity --> O(n^2)
// Auxilary space --> O(n)
void removeConDuplicates(char ch_arr[]){
    if(ch_arr[0] == '\0') return;
    if(ch_arr[0] == ch_arr[1]){
        int i = 1;
        for(; ch_arr[i] != '\0'; i++){
            ch_arr[i - 1] = ch_arr[i];
        }
        ch_arr[i - 1] = ch_arr[i];
        removeConDuplicates(ch_arr);
    }
    removeConDuplicates(ch_arr + 1);
}

int main()
{
    // Function removes the consecutive duplicates
    char ch_arr[100];
    cin >> ch_arr;
    removeConDuplicates(ch_arr);
    cout << ch_arr << endl;
    return 0;
}
