#include <iostream>
using namespace std;
int n, m;
int a[100000] = {}, b[100000] = {};
int maxx = -1000, minn = 100000000, sum = 0, sum2 = 0;
void init() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[n + i] = a[i];
    }
}
void work1() {
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < m; k++) {
            b[i] = b[i] + a[i + k];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (b[i] > maxx) {
            maxx = b[i];
            sum = i;
        }
        if (b[i] < minn) {
            minn = b[i];
            sum2 = i;
        }
    }
    cout << sum << endl;
    cout << sum2 << endl;
}
int main() {
    init();
    work1();
    return 0;
}
