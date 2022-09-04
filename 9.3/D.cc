#include <bits/stdc++.h>
using namespace std;
int n, a[100001];
string s;
int f() {
    int ret;
    for(int i = 1; a[i - 1] < n || (ret = i, 0); ++i)
        a[i] = (a[i - 1] << 1) + i + 2;
    return ret;
}
void Func(int x, int y) {
    while(a[x - 1] > y)
        --x;
    if(y == a[x - 1] + 1) {
        cout << 'm';
        return;
    }
    else if(y <= a[x - 1] + x + 2) {
        cout << 'o';
        return;
    }
    Func(x - 1, y - a[x - 1] - x - 2);
}
int main() {
    scanf("%d", &n);
    Func(f(), n);
    return 0;
}
