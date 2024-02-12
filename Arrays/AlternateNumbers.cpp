vector<int> alternateNumbers(vector<int> &arr)
{
    vector<int> positiveNums;
    vector<int> negativeNums;

    for (auto elem : arr)
    {
        if (elem > 0)
            positiveNums.push_back(elem);

        if (elem < 0)
            negativeNums.push_back(elem);
    }

    int n = positiveNums.size();
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        result.push_back(positiveNums[i]);
        result.push_back(negativeNums[i]);
    }

    return result;
}