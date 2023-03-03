#include <iostream>
#include "vector"
using namespace std;

// Time Complexity --> O(n log n)
// Auxilary Space --> O(n)


vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> intervals){
    vector<vector<int>> mergedIntervals;
    
    vector<int> tempInterval = intervals[0];
    
    sort(intervals.begin(), intervals.end());
    
    for(auto elem: intervals){
        if(elem[0] <= tempInterval[1]){
            tempInterval[1] = max(tempInterval[1], elem[1]);
        }
        else{
            mergedIntervals.push_back(tempInterval);
            tempInterval = elem;
        }
    }
    
    mergedIntervals.push_back(tempInterval);
    
    return mergedIntervals;
}



int main() {
    // Function merges the overlapping intervals
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> output = mergeOverlappingIntervals(intervals);
    
    for(auto elem: output){
        cout << elem[0] << " " << elem[1];
        cout << endl;
    }
    return 0;
}
