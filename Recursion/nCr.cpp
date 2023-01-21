#include <iostream>
#include <vector>
using namespace std;

int fact(int n){
    if(n <= 1) return 1;
    return n * fact(n - 1);
}

// Time complexity --> O(n)
// Auxilary space --> O(n)
int nCr(int n, int r){
    int nFact = fact(n);
    int rFact = fact(r);
    int nrFact = fact(n - r);
    
    return nFact / (rFact * nrFact);
}

int main()
{
    // nCr implementation
    cout << nCr(5, 3) << endl;
    return 0;
}
