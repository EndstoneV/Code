#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt1, cnt2, tmp;
        cnt1 = cnt2 = tmp = 0;
        while(n--) {
            cin >> tmp;
            if(tmp == 1)
                cnt1++;
            else
                cnt2++;
        }
        if(!(cnt1 % 2)) {
            if((!cnt1) && cnt2 % 2)
                cout << "NO";
            else
                cout << "YES";
            goto stozkx;
        }
        cout << "NO";
    stozkx:
        cout << endl;
    }
}