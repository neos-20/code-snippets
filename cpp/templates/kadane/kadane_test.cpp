#include <bits/stdc++.h>// Kadane's algo for computing max subarray sum with TC O(N)
using namespace std;
using namespace std::chrono;


template<typename T>
T maxSubVecSum(vector<T>& v)
{
    T MaxSum, CurSum = MaxSum = T{};
    for (auto& i : v)
    {
        CurSum += i;
        if (CurSum > MaxSum)
            MaxSum = CurSum;

        if (CurSum < 0)
            CurSum = 0;
    }
    return MaxSum;
}

int maxSubArraySum(int arr[], int size)
{
int MaxSum=0,CurSum=0;

for (int i = 0; i < size; i++)
{
CurSum += arr[i];
if (CurSum>MaxSum)
MaxSum=CurSum;

if(CurSum < 0)
CurSum=0;
}
return MaxSum;
}


signed main()
{
    vector<int> v(1000);
    int arr[1000];
    srand(time(0));
    for (int i = 0; i < 1000; i++)
        arr[i] = v[i] = rand();

    auto ia = high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
        maxSubArraySum(arr, 1000);
    auto fa =  high_resolution_clock::now();
    
    cout << "Time Taken by arr: " << duration_cast<milliseconds>(fa - ia).count() << '\n';

    auto iv =  high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
        maxSubVecSum(v);
     auto fv =  high_resolution_clock::now();

     cout << "Time Taken by arr: " << duration_cast<milliseconds>(fv - iv).count() << '\n';
}
