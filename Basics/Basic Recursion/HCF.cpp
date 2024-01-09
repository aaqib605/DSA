int calcGCD(int a, int b)
{
    if (a == 0)
        return b;
    int largerNum = max(a, b);
    int smallerNum = min(a, b);

    return calcGCD((largerNum % smallerNum), smallerNum);
}