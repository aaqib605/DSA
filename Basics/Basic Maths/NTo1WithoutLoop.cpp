void helper(int x, vector<int> &result)
{

    if (x == 0)
        return;

    result.push_back(x);

    helper(x - 1, result);
}

vector<int> printNos(int x)
{

    vector<int> result;

    helper(x, result);

    return result;
}
