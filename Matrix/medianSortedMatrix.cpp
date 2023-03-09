#include <iostream> 
using namespace std;

// Time Complexity --> O( log(max - min) * r * log col )
// Auxilary Space --> O(1)

int medianSortedMatrix(int m[][5]){
    int r = 3;
    int c = 5;
    
    int min = m[0][0];
    int max = m[0][c - 1];
    
    for (int i=0; i<r; i++)
    {
        // Finding the minimum element
        if (m[i][0] < min)
            min = m[i][0];
 
        // Finding the maximum element
        if (m[i][c-1] > max)
            max = m[i][c-1];
    }
     
        int desired = (r * c + 1) / 2;
        while (min < max)
        {
            int mid = min + (max - min) / 2;
            int place = 0;
     
            // Find count of elements smaller than or equal to mid
            for (int i = 0; i < r; ++i)
                place += upper_bound(m[i], m[i]+c, mid) - m[i];
            if (place < desired)
                min = mid + 1;
            else
                max = mid;
        }
        return min;
}

int main() {
    // Function finds the median of row-wise sorted matrix
    int matrix[][5] = {{2, 4, 6, 8, 10}, {1, 3, 5, 7, 9}, {100, 200, 400, 500, 800}};
    cout << medianSortedMatrix(matrix) << endl;
    return 0;
}
