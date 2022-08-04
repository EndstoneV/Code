#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;

int a, b;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin >> a >> b) {
        queue<int> queue1, queue2;
        int cnt = 1, ans;
        queue1.push(a), queue2.push(a);
        while(cnt < b) {
            int c1 = queue1.front(), c2 = queue2.front();
            if(c1 <= c2) {
                queue1.pop();
                if(c1 == c2)
                    queue2.pop();
                queue1.push(c1 * 2 + 1), queue2.push(c1 * 3 + 1);
            }
            else {
                queue2.pop();
                queue1.push(c2 * 2 + 1), queue2.push(c2 * 3 + 1);
            }
            cnt++;
        }
        ans = min(queue1.front(), queue2.front());
        cout << ans << endl;
    }
    return 0;
}