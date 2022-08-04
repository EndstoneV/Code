#include<bits/stdc++.h>
#define ll long long
using namespace std;
namespace std
{
    const int M = 1e9 + 7;
const int B = 233;
int gHash(const string& s) {
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
        res = (ll)(res * B + s[i]) % M;
    return res;
}
bool cmp(const string& s, const string& t) {
    return gHash(s) == gHash(t);
}
} // namespace std


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int ans = 0;
    string s[n + 1];
    for(int i = 1; i <= n; i ++)
        cin >> s[i];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            if(cmp(s[i], s[j]) && i != j)
                ans++;
        }   
    cout << n - ans / 2 << endl;
    return 0;
}