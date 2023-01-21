#include <iostream>
#include <math.h>
using namespace std;

int n;
int c = 2;
 
// O(n) + O(lonN) + O(1) --> O(n)
// Subsequent complexities are added, nested are multiplied
void func1(){
    // O(n/c) --> O(n) c being some constant
    for(int i = 0; i < n; i += c){
        // some constant work O(1)
    }
    
    // O(logN + 1) --> O(logN)
    for(int i = 1; i < n; i *= c){
        // some constant work O(1)
    }
    
    // O(1)
    for(int i = 1; i < 100; i++){
        // some constant work O(1)
    }
}

// O(nlogN) + O(n^2) --> O(n^2)
void func2(){
    // O(n) * O(logN) --> O(nlogN)
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j *= 2){
            // some constant work O(1)
        }
    }
    
    // O(n^2)
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            // some constant work O(1)
        }
    }
}

int main() {
    cin >> n;
    
    //-----------1-----------//
    // O(n/c) --> O(n) c being some constant
    for(int i = 0; i < n; i += c){
        // some constant work O(1)
    }
    
    //-----------2-----------//
    // O(logN + 1) --> O(logN)
    for(int i = 1; i < n; i *= c){
        // some constant work O(1)
    }
    
    //-----------3-----------//
    // O(log logN)
    for(int i = 1; i < n; i = pow(i, c)){
        // some constant work O(1)
    }
     
    //-----------4-----------//
    // O(n) * O(logN) --> O(nlogN)
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j *= 2){
            // some constant work O(1)
        }
    }
    
    //-----------5-----------//
    
    
    return 0;
}
