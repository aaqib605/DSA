#include <bits/stdc++.h>
using namespace std;

// Function to calculate the nth Fibonacci number
int calculateNthFibonacci(int n)
{
    // Base case: If n is 1 or 2, return 1
    if (n <= 2)
    {
        return 1;
    }

    // Initialize the first two Fibonacci numbers
    int firstFib = 1;
    int secondFib = 1;

    // Calculate the Fibonacci numbers up to the nth term
    for (int i = 3; i <= n; i++)
    {
        int nextFib = firstFib + secondFib;
        firstFib = secondFib;
        secondFib = nextFib;
    }

    // Return the nth Fibonacci number
    return secondFib;
}

int main()
{
    // Input: Get the value of n from the user
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Output: Display the nth Fibonacci number
    cout << "The " << n << "th Fibonacci number is: " << calculateNthFibonacci(n) << endl;

    return 0;
}
