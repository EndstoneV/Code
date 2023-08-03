#include <bits/stdc++.h>
using namespace std;
queue<int> q;
bool find(queue<int> qfind, int n) {
    queue<int> que = qfind;
    int size       = que.size();
    for(int i = 0; i < size; ++i) {
        int a = que.front();
        if(a == n) {
            return true;
        }
        que.pop();
    }
    return false;
}
int a[1005];
int main() {
    int m, n;
    int cnt = 0;
    scanf("%d%d", &m, &n);
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++) {
        if(find(q, a[i]))
            continue;
        else {
            q.push(a[i]);
            if(q.size() > m)
                q.pop();
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}