#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)
int a[5] = {6, 8, 4, 2};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(!n){
        cout << 1;
        return 0;
    }
    cout << a[n % 4];
    return 0;
}