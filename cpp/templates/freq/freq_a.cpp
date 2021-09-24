template<typename T>
void freqArr(T A[], int n, T freq[])
{
    for (int i = 0; i < n; i++)
        freq[i] = 0;

    for (int i = 0; i < n; i++)
        freq[A[i]]++;
}
