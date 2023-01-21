
#include <iostream>
using namespace std;

// O(C + n) C is some constant
//int sumN(int n){
//    int sum = 0;
//    for(int i = 1; i <= n; i++){
//        sum += i;
//    }
//    return sum;
//}

// O(C1n^2 + C2n + C3) C is some constant
//int sumN(int n){
//    int sum = 0;
//    for(int i = 1; i <= n; i++){
//        for(int j = 1; j <= i; j++){
//            sum++;
//        }
//    }
//    return sum;
//}

// O(C) C is some constant
int sumN(int n){
    int sum = (n * (n + 1)) / 2;
    return sum;
}

int main() {
    cout << sumN(3) << endl;
    return 0;
}
