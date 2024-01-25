int missingNumber(vector<int> &arr, int N)
{
    // Calculate the sum of the first N natural numbers using the formula.
    int sumOfFirstNNaturalNumbers = (N * (N + 1)) / 2;

    // Calculate the sum of the numbers in the provided vector.
    int sumOfVectorNumbers = 0;
    for (auto number : arr)
    {
        sumOfVectorNumbers += number;
    }

    // The missing number is the difference between the sum of the first N natural numbers
    // and the sum of the numbers in the vector.
    int missingNumber = sumOfFirstNNaturalNumbers - sumOfVectorNumbers;

    return missingNumber;
}