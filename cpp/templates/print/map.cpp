template<typename T, typename U>
ostream& operator<<(ostream& os, map<T, U>& m)
{
    for (auto& i : m)
        os << i;
    return os;
}
