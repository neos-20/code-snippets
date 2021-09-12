template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p)
{
    static const char *PRELIM = "{";
    static const char *INTERLIM = ", ";
    static const char *DELIM = "} ";
    return os << PRELIM << p.first << INTERLIM << p.second << DELIM;
}
