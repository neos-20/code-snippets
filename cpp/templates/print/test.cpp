#include <bits/stdc++.h>
using namespace std;

template<typename T, typename U>
ostream& operator<<(ostream& os, const map<T, U>& m);

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v);

template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p);

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    static const char *DELIM = " ";
    for (auto& i : v)
        os << i << DELIM;
    return os;
}
template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p)
{
    static const char *PRELIM = "{";
    static const char *INTERLIM = ", ";
    static const char *DELIM = "}, ";
    return os << PRELIM << p.first << INTERLIM << p.second << DELIM;
}
template<typename T, typename U>
ostream& operator<<(ostream& os,const map<T, U>& m)
{
   static const char *DELIM = "\n";
    for (auto& i : m)
        os << i << DELIM; //Uses operator<<() for pair.
    return os;
}

int main()
{
    map<pair<int, vector<pair<int, int>>>, int> m = 
    {
        {{1, vector(1, make_pair(10, 10)) }, 100},
        {{2, vector(2, make_pair(20, 20))}, 200},
        {{3, vector(3, make_pair(30, 30))}, 300}
    };
    cout << m;
}
