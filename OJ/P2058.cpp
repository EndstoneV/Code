#include <bits/stdc++.h>
using namespace std;
int a[100005];
struct person {
    int nationality;
    int timme;
    person(int a = 0, int b = 0) {
        nationality = a;
        timme       = b;
    }
};
queue<person> q;
int main() {
    int n;
    cin >> n;
    for(int t, k, x, i = 1; i <= n; ++i) {
        cin >> t >> k;
        for(int j = 1; j <= k; ++j) {
            cin >> x;
            q.push(person(x, t));
            if(a[x] == 0)
                ++*a;
            ++a[x];
        }
        while(t - q.front().timme >= 86400) {
            if(--a[q.front().nationality] <= 0)
                --*a;
            q.pop();
        }
        cout << *a << endl;
    }
    return 0;
}