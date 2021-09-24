template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    static const char *DELIM = " ";
//    static const char *END = "\n";
    for (auto& i : v)
        os << i << DELIM;
    return os << END;
}

template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p)
{
    static const char* PRELIM = "{";
    static const char* INTERLIM = ", ";
    static const char* DELIM = "} ";
    return os << PRELIM << p.first << INTERLIM << p.second << DELIM;
}

template<typename T, typename U>
ostream& operator<<(ostream& os, const map<T, U>& m)
{
    static const char* DELIM = "\n";
    for (auto& i : m)
        os << i << DELIM;
    return os;
}

template<typename T>
ostream& operator<<(ostream& os,const set<T>& s)
{
    static const char* DELIM = "\n";
    for (auto& i : v)
        os << i << DELIM;
    return os;
}
