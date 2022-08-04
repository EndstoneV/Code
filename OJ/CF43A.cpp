#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int n, mx;
map<string, int> m;
string mxteamname, tmpstring;
int main(int argc, char** argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while(n--) {
        cin >> tmpstring;
        m[tmpstring]++;
        if(m[tmpstring] > mx) {
            mx = m[tmpstring], mxteamname  = tmpstring;
        }
    }
    cout << mxteamname;
}