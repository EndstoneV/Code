#include <cstdio>
#include <iostream>
using namespace std;
char a[200][200];
int n, m;
bool checknumber(char a) {
    return (a != '*');
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(a[i][j] == '*') {
                if(checknumber(a[i - 1][j]))
                    a[i - 1][j]++;
                if(checknumber(a[i - 1][j - 1]))
                    a[i - 1][j - 1]++;
                if(checknumber(a[i][j - 1]))
                    a[i][j - 1]++;
                if(checknumber(a[i][j + 1]))
                    a[i][j + 1]++;
                if(checknumber(a[i + 1][j]))
                    a[i + 1][j]++;
                if(checknumber(a[i + 1][j + 1]))
                    a[i + 1][j + 1]++;
                if(checknumber(a[i - 1][j + 1]))
                    a[i - 1][j + 1]++;
                if(checknumber(a[i + 1][j - 1]))
                    a[i + 1][j - 1]++;
            }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i][j] == '*')
                cout << "*";
            else
                printf("%d", a[i][j] - '?');
        }
        cout << endl;
    }
    return 0;
}
