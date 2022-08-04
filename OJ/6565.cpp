#include<bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

struct person{
    string s;
    int len;
    string name;
    int id;
    int cnt = 0;
};
bool cmp(person x, person y){
    if(x.cnt != y.cnt)
        return x.cnt > y.cnt;
    else return x.id < y.id;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    person p[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> p[i].name >> p[i].s;
        p[i].id = i;
        p[i].len = p[i].s.length();
    }
    for(int i = 1; i <= n; i++)
        for(int j = 0; j < p[i].len - 2; j++)
            if(p[i].s[j] == 's' && p[i].s[j + 1] == 'o' && p[i].s[j + 2] == 's')
                p[i].cnt++;
    sort(p + 1, p + n + 1, cmp);
    int mx = p[1].cnt;
    for(int i = 1; p[i].cnt == mx; i++)
        cout << p[i].name << ' ';
    cout << endl << mx;
    return 0;
}