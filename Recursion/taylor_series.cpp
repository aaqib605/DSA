#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + cn
// Time complexity --> O(n^2)
// Auxilary space --> O(n)
double e(double x, double n){
    static double power = 1, factorial = 1;
    if(n == 0) return 1;
    double r = e(x, n - 1);
    power *= x;
    factorial *= n;
    return r + power/factorial;
}

int main()
{
    // Implementation of Taylor series
    cout << e(2, 3) << endl;
    return 0;
}
