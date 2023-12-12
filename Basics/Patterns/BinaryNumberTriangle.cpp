#include <iostream>
using namespace std;

void nBinaryTriangle(int n)
{
    // Outer loop for each row
    for (int i = 1; i <= n; i++)
    {
        // Determine the starting value for each row
        bool isTrue = (i % 2 == 0) ? false : true;

        // Inner loop for each column in the row
        for (int j = 1; j <= i; j++)
        {
            // Print the current value and toggle for the next column
            cout << isTrue << " ";
            isTrue = !isTrue;
        }

        // Move to the next line for the next row
        cout << endl;
    }
}

int main()
{
    // Example usage with n = 5
    nBinaryTriangle(5);

    return 0;
}
