#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int a, b, c, ans[99], mx = -2333, mxi = 1145141919;
    memset(ans, 0, sizeof(ans));
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
            for(int k = 1; k <= c; k++)
                ans[i + j + k]++;
    for(int i = 1; i <= a + b + c; i++)
        mx = max(mx, ans[i]);
    for(int i = 1; i <= a + b + c; i++)
        if(ans[i] == mx)
            mxi = min(i, mxi);
    cout << mxi;
    return 0;
}