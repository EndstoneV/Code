#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, tim;
    cin >> n;
    int a[n + 1];
    tim = a[0] = a[n + 1] = 0;
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
    for(int i = 1; i <= n + 1; i ++){
        if(a[i] - a[i - 1] > 0)
            tim += (a[i] - a[i - 1]) * 6;
        else   
            tim += (a[i - 1] - a[i]) * 4;    
        tim += 6;    
    }
    // tim += 6 * n;
    cout << tim;
    return 0;
}