#include <iostream>
#include <math.h>
using namespace std;


// Recurrence relation --> T(n) = 2T(n/2) + O(1) and T(0) = O(1)
// Time Complexity --> O(n)
void func1(int n){
    if(n <= 0) return;
    cout << "Printing something" << endl;
    func1(n/2);
    func1(n/2);
}

// Recurrence relation --> T(n) = T(n/4) + T(n/2) + cn and T(0) = O(1)
// Time complexity --> O(n)
void func2(int n){
    if(n <= 0) return;
    for(int i = 0; i < n; i++){
        cout << "Printing something" << endl;
    }
    func2(n/4);
    func2(n/2);
}

// Recurrence relation --> T(n) = 2T(n - 1) + c and T(1) = O(1)
// Time complexity --> O(2^n)
void func3(int n){
    if(n <= 1) return;
    cout << "Printing something" << endl;
    func3(n - 1);
    func3(n - 1);
}

// Recurrence relation --> T(n) = T(n/2) + c and T(1) = O(1)
// Time complexity --> O(logN)
void func4(int n){
    if(n <= 1) return;
    cout << "Printing something" << endl;
    func4(n/2);
}

// Recurrence relation --> T(n) = T(n - 1) + T(n - 2) + c and T(1) = O(1)
// Time complexity --> O(2^n)
void func5(int n){
    if(n <= 1) return;
    cout << "Printing something" << endl;
    func5(n - 1);
    func5(n - 2);
}
int main() {
    int n;
    cin >> n;
    func1(n);
    func2(n);
    func3(n);
    func4(n);
    func5(n);
    return 0;
}
