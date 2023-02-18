#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O(logN)
// Auxilary Space --> O(1)
 
int findPeakElement(vector<int>& nums, auto n) {
    if(n == 1) return nums[0];
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(mid > 0 && mid < n - 1){
            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
                return nums[mid];
            }
            else if(nums[mid - 1] > nums[mid]){
                end = mid - 1;
            }
            else if(nums[mid + 1] > nums[mid]){
                start = mid + 1;
            }
        }
        else if(mid == 0){
            if(nums[mid] > nums[mid + 1]){
                return nums[mid];
            }
            else{
                return nums[mid + 1];
            }
        }
        else if(mid == n - 1){
            if(nums[mid] > nums[mid - 1]){
                return nums[mid];
            }
            else{
                return nums[mid - 1];
            }
        }
    }
    return -1;
}

int main(){
    // Function returns any of the peak elements in an array
    vector<int> nums = {3, 4, 3, 2, 1};
    auto n = nums.size();
    cout << findPeakElement(nums, n) << endl;
    return 0;
}
