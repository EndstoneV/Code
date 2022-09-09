#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, x, k) for(int i = x; i <= k; i++)
string s;
int t, siz, x, cnt;
// bool yiyoujh = false;
int main() {
    scanf("%d", &t);
    while(t--) {
        cin >> s;
        while(x < s.size() && s[x] == ' ')
            x++;
        if(x >= s.size() - 1 || s[x] != '#' || s[++x] != ' ')
            continue;
        while(x < s.size() && s[x] == ' ')
            x++;
        if(x >= s.size())
            continue;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}