#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while(t--){
        int n, cnt = 0, c = 0, a[1005];
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        if(n == 2){
            cout << 2 << endl;
            continue;
        }
        if(n % 2 == 0)
            a[1] = 1;
        else 
            a[1] = 2;
        cnt += a[1];
        for(int i = 2; cnt <= n; i++, c++){
            if(a[i - 1] == 1) a[i] = 2;
            else a[i] = 1;
            cnt += a[i];
        }
        for(int i = 1; i <= c; i++)
            cout << a[i];
        cout << endl;
    }
}