#include <iostream>
#include <vector>
using namespace std;

// Recurrence relation --> T(n) = 2T(n - 1) + O(1)
// Time complexity --> O(2^n)
// Auxilary space --> O(n)
void subsets(string str, vector<string> &res, string sub, int index){
    if(index >= str.length()){
        res.push_back(sub);
        return;
    }
    
    sub.push_back(str[index]);
    subsets(str, res, sub, index + 1);
    sub.pop_back();
    subsets(str, res, sub, index + 1);
}

int main() {
    // Subsets/Subsequences problem
    vector<string> res;
    string sub = "";
    subsets("abc", res, sub, 0);
    for(auto elem: res){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
