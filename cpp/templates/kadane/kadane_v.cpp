template<typename T>
T maxSubArraySum(const vector<T>& v)
{
    T MaxSum = T{}, CurSum = T{};
    auto sz = v.size();
    for (T i = T{}; i != sz; i++)
    {
        CurSum += v[i];
        if (CurSum > MaxSum)
            MaxSum = CurSum;
        if (CurSum < T{})
            CurSum = T{};
    }
    return MaxSum;
}
