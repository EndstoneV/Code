#include <bits/stdc++.h>
using namespace std;
int tj[10004], em[10004];
bool t[10040], k[10040];
int n;
int main() {
    scanf("%d", &n);
    int ans = 0;
    for(int i = 1; i <= n; i++)
        scanf("%d", &tj[i]);
    for(int i = 1; i <= n; i++)
        scanf("%d", &em[i]);
    sort(tj + 1, tj + n + 1);
    sort(em + 1, em + n + 1);
    int ne, nt, it, ie;
    ne = nt = n, ie = it = 1;
    while(n--) {
        if(tj[nt] > em[ne]) {// WIN
            ans += 200;
            ne--, nt--;
        }
        else if(tj[it] > em[ie]) {//WIN
            ans += 200;
            ie++, it++;
        }
        else if(tj[it] < em[ne]) {//LOSE
            ans -= 200;
            it++, ne--;
        }
    }
    printf("%d", ans);
    return 0;
}
