vector<int> getSecondOrderElements(int n, vector<int> arr)
{
    int smallestNum = INT_MAX;
    int secondSmallestNum = INT_MAX;

    int greatestNum = INT_MIN;
    int secondGreatestNum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int currNum = arr[i];

        if (currNum > greatestNum)
        {
            secondGreatestNum = greatestNum;
            greatestNum = currNum;
        }
        else if (currNum > secondGreatestNum && currNum < greatestNum)
        {
            secondGreatestNum = currNum;
        }

        if (currNum < smallestNum)
        {
            secondSmallestNum = smallestNum;
            smallestNum = currNum;
        }
        else if (currNum > smallestNum && currNum < secondSmallestNum)
        {
            secondSmallestNum = currNum;
        }
    }

    return {secondGreatestNum, secondSmallestNum};
}
