#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, j, k) for(int i = j; i <= k; i++)

int main() {
    int n, m;
    deque<int> q;
    int tmp;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &tmp);
        while(q.size() && tmp > q.back())
            q.pop_back();
        q.push_back(tmp);
        if(n + 1 - i <= m)
            cout << q.front(),q.pop_front();
    }
    return 0;
}