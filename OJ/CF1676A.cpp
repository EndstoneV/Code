#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        if(a[0] + a[1] + a[2] == a[4] + a[5] + a[3])
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    system("pause");
    return 0;
}