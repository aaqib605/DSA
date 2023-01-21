#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = T(n - 1) + O(1)
// Time complexity --> O(n)
// Auxilary space --> O(n)

int jos(int n, int k){
    if(n == 1) return 0;
    
    return (jos(n - 1, k) + k) % n;
}


int main()
{
    // Josephus Problem
    cout << jos(6, 2) << endl;
    return 0;
}
