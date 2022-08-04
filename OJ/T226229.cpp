#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double
#define f(i, j, k) for(int i = j; i <= k; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    int n, a, d, tmp, c = 0;
    int b[(int)1e5];
    while(T--){
        n = a = d = tmp = c = 0;
        memset(b, 0, sizeof(b));
        cin >> n >> a >> d;
        for(int i = a, cnt = 1; cnt <= n; cnt++, i += d, tmp = i)
            b[i] = i;
        tmp--;
        f(i, 1, tmp / 2){
            for(int j = tmp; j >= tmp / 2; j--){
                if((i + j) % 2 == 0 && b[(i + j) / 2] == 0)
                    c++, b[(i + j) / 2] = (i + j) / 2;
            }
        }
        cout << c << endl;
    }
    return 0;
}