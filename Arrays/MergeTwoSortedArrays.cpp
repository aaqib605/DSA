vector<int> sortedArray(vector<int> arrOne, vector<int> arrTwo)
{
    int i = 0;
    int j = 0;
    int n = arrOne.size();
    int m = arrTwo.size();
    vector<int> unionArr;

    while (i < n && j < m)
    {
        if (arrOne[i] <= arrTwo[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arrOne[i])
            {
                unionArr.push_back(arrOne[i]);
            }

            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arrTwo[j])
            {
                unionArr.push_back(arrTwo[j]);
            }

            j++;
        }
    }

    while (i < n)
    {
        if (unionArr.size() == 0 || unionArr.back() != arrOne[i])
        {
            unionArr.push_back(arrOne[i]);
        }

        i++;
    }

    while (j < m)
    {
        if (unionArr.size() == 0 || unionArr.back() != arrTwo[j])
        {
            unionArr.push_back(arrTwo[j]);
        }

        j++;
    }

    return unionArr;
}