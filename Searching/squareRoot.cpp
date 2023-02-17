#include <iostream>
using namespace std;

// Time complexity --> O(logN)
// Auxilary Space --> O(1)


int squareRoot(int num){
    int start = 1;
    int end = num;
    int ans = -1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(mid * mid == num){
            return mid;
        }
        
        if(mid * mid < num){
            ans = mid;
            start = mid + 1;
        }
        else if(mid * mid > num){
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    // Function returns the floor of square root of a number
    cout << squareRoot(14) << endl;
    return 0;
}
