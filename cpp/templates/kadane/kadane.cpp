template<typename T>
T maxSubArraySum(const vector<T>& v)
{
    T MaxSum = T{}, CurSum = T{};
    for (auto i : v)
    {
        CurSum += v[i];
        MaxSum = (CurSum > MaxSum) ? CurSum : MaxSum;
        CurSum = (CurSum < T{}) ? T{} : CurSum;
    }
    return MaxSum;
}
