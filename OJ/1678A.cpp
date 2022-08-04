#include <bits/stdc++.h>
using namespace std;
int a[103], countt[10], cnt;
int main() {
    int t, cnt0 = 0;
    scanf("%d", &t);
    while(t--) {
        int n;
        cnt0 = 0;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]), countt[a[i]]++;
            if(a[i] == 0) cnt0 ++;
        }
        if(cnt0){
            printf("%d\n", n - cnt0);
            continue;
        }
        for(int i = 1; i <= 9; i++){
            if(countt[i] > 1){
                printf("%d\n", n);
                continue;
            }
        }
        printf("%d\n", n + 1);
    }
}