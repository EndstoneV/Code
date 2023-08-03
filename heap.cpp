#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x;
    scanf("%d", &t);
    while(t--) {
        priority_queue<int, vector<int>, less<int>> a;
        priority_queue<int, vector<int>, greater<int>> b;
        while(scanf("%d", &x) && x) {
            if(x == -1) {
                printf("%d\n", a.top());
                a.pop();
            }
            else {
                if(a.empty() || x <= a.top())
                    a.push(x);
                else
                    b.push(x);
            }
            if(a.size() > (a.size() + b.size() + 1) / 2) {
                b.push(a.top());
                a.pop();
            }
            else if(a.size() < (a.size() + b.size() + 1) / 2) {
                a.push(b.top());
                b.pop();
            }
        }
    }
    return 0;
}