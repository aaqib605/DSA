#include <iostream>
using namespace std;

// Time Complexity --> O(n)
// Auxilary Space --> O(n)

int maxOccuring(int l[], auto n1, int r[], auto n2){
    int maxElement = INT_MIN;
    for(int i = 0; i < n1; i++){
        maxElement = max(maxElement, l[i]);
    }
    for(int i = 0; i < n2; i++){
        maxElement = max(maxElement, r[i]);
    }
    
    int *frequencies = new int[maxElement + 1];
    
    for(int i = 0; i < n1; i++){
        int start = l[i];
        int end = r[i];
        
        while(start <= end){
            frequencies[start]++;
            start++;
        }
    }
    
    int maxOccuring = 0;
    for(int i = 1; i <= maxElement; i++){
        if(frequencies[i] > frequencies[maxOccuring]){
            maxOccuring = i;
        }
    }
    return maxOccuring;
}

int main() {
    // Function returns the maximum occuring element in the given ranges
    int l[] = {2, 1, 3};
    auto n1 = sizeof(l) / sizeof(int);
    int r[] = {5, 3, 9};
    auto n2 = sizeof(r) / sizeof(int);
    cout << maxOccuring(l, n1, r, n2) << endl;
    
    return 0;
}
