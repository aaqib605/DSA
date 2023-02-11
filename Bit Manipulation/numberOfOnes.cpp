#include <iostream>

using namespace std;
// Time complexity --> O(logN)
// Auxilary Space --> O(1)

int numberOfOnes(int n){
    int count = 0;
    while(n){
        count++;
        n &= (n - 1);
    }
    return count;
}

int main(){
    // Function returns the number of 1's in the binary representation of a number
    cout << numberOfOnes(7) << endl;
    return 0;
}
