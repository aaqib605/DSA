vector<int> getFrequencies(vector<int> &v)
{

    unordered_map<int, int> mpp;

    int minFreqEl = INT_MAX;
    int maxFreqEl = INT_MIN;
    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }

    for (auto pair : mpp)
    {

        if (pair.second > maxFreq)
        {
            maxFreq = pair.second;
            maxFreqEl = pair.first;
        }

        if (pair.second < minFreq)
        {
            minFreq = pair.second;
            minFreqEl = pair.first;
        }
    }

    for (auto pair : mpp)
    {

        if (pair.second == maxFreq)
        {
            maxFreqEl = min(maxFreqEl, pair.first);
        }

        if (pair.second == minFreq)
        {
            minFreqEl = min(minFreqEl, pair.first);
        }
    }

    return {maxFreqEl, minFreqEl};
}