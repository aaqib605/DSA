#include <iostream>
#include <vector>
using namespace std;

// This function returns the no. of subsets with a given sum
// Time complexity --> O(2^n)
// Auxilary space --> O(n)

int subsetSum(vector<int> arr, int sum, int index){
    if(index == arr.size()){
        return (sum == 0) ? 1 : 0;
    }
    
    return subsetSum(arr, sum - arr[index], index + 1) + subsetSum(arr, sum, index + 1);
}

int main()
{
    // Subset Sum problem
    vector<int> arr = {1,2,3};
    int sum = 3;
    int index = 0;
    cout << subsetSum(arr, sum, index) << endl;
    return 0;
}
