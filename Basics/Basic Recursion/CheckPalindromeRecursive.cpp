void helper(int start, int end, string &str)
{
    if (start > end)
        return;
    swap(str[start], str[end]);
    helper(start + 1, end - 1, str);
}

bool isPalindrome(string &str)
{
    int start = 0;
    int end = str.size() - 1;

    string originalStr = str;
    helper(start, end, str);

    return originalStr == str;
}
