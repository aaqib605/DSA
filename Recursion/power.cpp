#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + c
// Time complexity --> O(n)
// Auxilary space --> O(n)
int pow(int x, int n){
    if(n == 0) return 1;
    return x * pow(x, n - 1);
}


int pow_(int x, int n){
    if(n == 1) return x;
    if(n % 2 == 0){
        return pow_(x*x, n/2);
    }
    else{
        return x * pow_(x*x, n/2);
    }
}

int main()
{
    // This function returns x^n
    cout << pow(2, 5) << endl;
    // Optimised pow function
    cout << pow_(2, 5) << endl;
    return 0;
}
