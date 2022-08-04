#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    int lt, dt;
    lt = abs(x - y) * a;
    dt = abs(z - x) * b + c + abs(x - y) * b + c + c;
    puts(lt >= dt ? "Yes" : "No");
    return 0;
}