#include <iostream>
#include <math.h>
using namespace std;

// Time complexity --> O(n)
// Auxilary space --> O(n)
int multi(int a, int b){
    if(b == 1) return a;
    return a + multi(a, b - 1);
}

int main()
{
    // Function does multiplication of two numbers
    int a = 5, b = 5;
    cout << multi(a, b) << endl;
    return 0;
}
