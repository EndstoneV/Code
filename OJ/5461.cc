#include<bits/stdc++.h>
using namespace std;
int a[1025][1025], x, n;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    n = (1 << n);
    for(int i = 1; i <= n; i++)
        a[i][1] = 1, a[i][i] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 2; j < i; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n - i; k++) 
            cout << "0 ";
        for(int j = 1; j <= i; j++)
            cout << abs(a[i][j]) % 2 << ' ';
        cout << endl;
    }
    return 0;
}