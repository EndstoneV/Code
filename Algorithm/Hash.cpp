#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int B = 233;
typedef long long ll;
int get_hash(const string& s) {
    int res = 0;
    for(int i = 0; i < s.size(); ++i) {
        res = ( ll )(res * B + s[i]) % M;
    }
    return res;
}
bool cmp(const string& s, const string& t) {
    return get_hash(s) == get_hash(t);
}
int main(int argc, char** argv) {
    string a, b;
    cin >> a >> b;
    if(cmp(a, b))
        cout << "Y";
    else
        cout << "N";
}