#include <iostream>
using namespace std;

// Function to find the maximum of two numbers
int Maximum(int x, int y)
{
    // Ternary operator to return the maximum
    return x > y ? x : y;
}

// Function to swap the values of two numbers using references
void Swap(int &x, int &y)
{
    // Using a temporary variable to perform the swap
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    // Variable declarations
    int test, a, b, r;

    // User input for test case and two integers
    cout << "Enter test case (1 for Maximum, 2 for Swap): ";
    cin >> test;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Switch statement to perform different operations based on the test case
    switch (test)
    {
    case 1:
        // Calling the Maximum function and displaying the result
        r = Maximum(a, b);
        cout << "Maximum: " << r << endl;
        break;
    case 2:
        // Calling the Swap function and displaying the swapped values
        Swap(a, b);
        cout << "Swapped values: " << a << " " << b << endl;
        break;
    default:
        // Displaying an error message for invalid test option
        cout << "Invalid test option" << endl;
    }

    return 0;
}
