#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
int n, m, g, cnt;
struct stu
{
    string name;
    int problems;
    int p[11];
    int score;
    bool pass;
};
stu a[1001];
bool comp(stu a, stu b){
    if(a.score != b.score)
        return a.score > b.score;
    else return a.name < b.name;
}
int main()
{
    // ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> g;
    int s[m + 1];
    f(i, 1, m)
        cin >> s[i];
    f(i, 1, n){
        cin >> a[i].name >> a[i].problems;
        f(j, 1, a[i].problems)
            cin >> a[i].p[j], a[i].score += s[a[i].p[j]];
        if(a[i].score >= g)
            a[i].pass = 1, cnt++;
    }
    sort(a + 1, a + n + 1, comp);
    cout << cnt << endl;
    f(i, 1, n){
        if(a[i].pass)
            cout << a[i].name << ' ' << a[i].score << endl;
    }
}