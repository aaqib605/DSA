vector<string> printNTimes(int n)
{
    if (n == 1)
    {
        return {"Coding Ninjas"};
    }
    vector<string> result = printNTimes(n - 1);
    result.push_back("Coding Ninjas");
    return result;
}