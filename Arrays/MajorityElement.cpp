int majorityElement(vector<int> v)
{
    int n = v.size();
    unordered_map<int, int> mpp;

    for (const auto &elem : v)
    {
        if (mpp.find(elem) != mpp.end())
        {
            mpp[elem] += 1;
        }
        else
        {
            mpp[elem] = 1;
        }
    }

    for (const auto &elem : mpp)
    {
        if (elem.second > n / 2)
            return elem.first;
    }

    return 0;
}