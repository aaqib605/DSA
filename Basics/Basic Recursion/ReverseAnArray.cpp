void helper(int start, int end, vector<int> &numsArr)
{
    if (start > end)
        return;
    swap(numsArr[start], numsArr[end]);
    helper(start + 1, end - 1, numsArr);
}

vector<int> reverseArray(int n, vector<int> &numsArr)
{
    int start = 0;
    int end = n - 1;
    helper(start, end, numsArr);
    return numsArr;
}
