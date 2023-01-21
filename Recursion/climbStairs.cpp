#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n)
// Auxilary space --> O(n)

int climbStairs(int n){
    if(n == 0) return 1;
    if(n < 0) return 0;
    return climbStairs(n - 1) + climbStairs(n - 2) + climbStairs(n - 3);
}

int main()
{
    // Function returns distinct ways to climb the staircase (steps: 1 or 2 or 3)
    cout << climbStairs(4) << endl;
    return 0;
}
