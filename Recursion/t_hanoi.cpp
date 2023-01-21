#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = 2T(n - 1) + O(1)
// Time complexity --> O(2^n)
// Auxilary space --> O(n)
void t_hanoi(int n, int a, int b, int c){
    if(n == 0) return;
    t_hanoi(n - 1, a, c, b);
    cout << a << " to " << c << endl;
    t_hanoi(n - 1, b, a, c);
}

int main()
{
    // Tower of Hanoi
    t_hanoi(3, 1, 2, 3);
    return 0;
}
