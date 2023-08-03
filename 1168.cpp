#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, less<int>> a;
priority_queue<int, vector<int>, greater<int>> b;
int main() {
    int n, x;
    scanf("%d", &n);
    cin >> x;
    a.push(x);
    cout << x << endl;
    for(int i = 2; i <= n; i++) {
        scanf("%d", &x);

        if(x <= a.top())
            a.push(x);
        else
            b.push(x);
        if(a.size() > b.size()) {
            b.push(a.top());
            a.pop();
        }
        else if(b.size() > (a.size() + b.size() + 1) / 2) {
            a.push(b.top());
            b.pop();
        }
        if(i % 2) {
            printf("%d\n", b.top());
        }
    }
    return 0;
}