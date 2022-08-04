#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    ios::sync_with_stdio(false);
    cin >> n;
    int a[23][23];
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= n; i++)
        a[i][1] = 1, a[i][i] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 2; j < i; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}