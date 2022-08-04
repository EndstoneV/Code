#include<iostream>
#include<algorithm>
using namespace std;
unsigned long long ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int T = 3e6;
    while(T--)
    {
        unsigned long long a;
        cin >> a;
        ans ^= a;
    }
    cout << ans << endl;
}