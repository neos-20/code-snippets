template<typename T>
void freqVec(const vector<T>& v, vector<T>& f)
{
    f.assign(v.size(), T{});
    auto t = v.size();
    for (int i = T{}; i < t; i++)
        f.at(v[i])++;
}
