#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define SIZE 1000
#define ITERATIONS 100000

// Makes a frequency vector for the types it makes sense for
// i.e. for numeric types, not for strings
template<typename T>
void freqVec(const vector<T>& v, vector<T>& f)
{
    f.assign(v.size(), T{});
    auto t = v.size();
    for (int i = 0; i < t; i++)
        f.at(v[i])++;
}

// Function to make frequency array of size n
template<typename T>
void freqArr(T A[], int n, T freq[])
{
    for (int i = 0; i < n; i++)
        freq[i] = 0;

    for (int i = 0; i < n; i++)
        freq[A[i]]++;
}

int main()
{
    srand(time(0));

    vector<int> vec(SIZE), fvec(SIZE);
    int arr[SIZE], farr[SIZE];
    for (int i = 0; i < SIZE; i++)
        vec[i] = arr[i] = rand() % SIZE;

    auto ia = high_resolution_clock::now();
    for (int i = 0; i < ITERATIONS; i++)
        freqArr(arr, SIZE, farr);
    auto fa = high_resolution_clock::now();

    cout << "Arr: " << duration_cast<milliseconds>(fa - ia).count() << '\n';

    auto iv = high_resolution_clock::now();
    for (int i = 0; i < ITERATIONS; i++)
        freqVec(vec, fvec);
    auto fv = high_resolution_clock::now();

    cout << "Vec: " << duration_cast<milliseconds>(fv - iv).count() << '\n';
}
