#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define sp ' '
#define f(i, j, k) for(int i = j; i <= k; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a, b, c, d, e, f;
    f = n / 100;
    n %= 100;
    e = n / 50;
    n %= 50;
    d = n / 20;
    n %= 20;
    c = n / 10;
    n %= 10;
    b = n / 5;
    n %= 5;
    a = n;
    cout << a << sp << b << sp << c << sp << d << sp << e << sp << f << sp;
}