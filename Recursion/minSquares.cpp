#include <iostream>
#include <math.h>
using namespace std;

int getMinSquares(int n){
    if(n <= 3) return n;
    
    int ans = n;
    
    for(int i = 1; i*i <= n; i++){
        int temp = i*i;
        ans = min(ans, 1 + getMinSquares(n - temp));
    }
    return ans;
}


int main() {
    // Function returns the minimum no of squares to make a number
    cout << getMinSquares(13) << endl;
    return 0;
}
