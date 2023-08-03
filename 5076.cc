#include <bits/stdc++.h>
using namespace std;
priority_queue<int> q, qop;
int main() {
    int t, op, val, cnt;
    int zkx;
    scanf("%d", &t);
    while(t--) {
        qop = q;
        cnt = 0;
        zkx = -1;
        scanf("%d%d", &op, &val);
        if(op == 5) {
            q.push(-val);
            continue;
        }
        if(op == 4) {
            while(-qop.top() <= val && qop.size())
                qop.pop();
            if(qop.empty())
                printf("2147483647\n");
            else
                printf("%d\n", -qop.top());
            continue;
        }
        if(op == 3) {
            while(-qop.top() < val && qop.size())
                zkx = -qop.top(), qop.pop();
            if(zkx == -1)
                printf("-2147483647");
            else
                printf("%d\n", zkx);
            continue;
        }
        if(op == 2) {
            for(int i = 1; i < val && qop.size(); i++) {
                qop.pop();
            }
            printf("%d\n", -qop.top());
            continue;
        }
        if(op == 1) {
            while(-qop.top() < val && qop.size())
                qop.pop(), cnt++;
            printf("%d\n", cnt + 1);
        }
    }
}