template<typename T, typename U>
T maxSubArraySum(T arr[], U size)
{
    U MaxSum = 0, CurSum = 0;

    for (U i = 0; i < size; i++)
    {
        CurSum += arr[i];
        if (CurSum>MaxSum)
            MaxSum=CurSum;

        if(CurSum < 0)
            CurSum=0;
    }
    return MaxSum;
}
