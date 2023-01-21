#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(n)
// Auxilary space --> O(n)
int nCr(int n, int r){
    if(n == r || r == 0) return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
    // nCr implementation using pascal triangle
    cout << nCr(5, 3) << endl;
    return 0;
}
