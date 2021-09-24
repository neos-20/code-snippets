template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v);

template<typename T>
ostream& operator<<(ostream& os,const set<T>& s);

template<typename T, typename U>
ostream& operator<<(ostream& os, const map<T, U>& m);

template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p);

