#include <bits/stdc++.h>
#define np next_permutation
#define ll long long 
using namespace std;

string name[10] = { "Beatrice", "Belinda", "Bella",     "Bessie",
                    "Betsy",    "Blue",    "Buttercup", "Sue" },
       require[10][10];
int n, cnt;
bool flag;
map<string, int> m;// x, y | m[x] => y

int main() {
    for(int i = 0; i < 8; i++) {
        m[name[i]] = i;
    }
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> require[i][j];
        }
    }
    while(cnt <= 43200) {
        flag = 0;
        cnt++;
        for(int i = 0; i < n; i++) {
            if(abs(m[require[i][0]] - m[require[i][5]]) != 1) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            break;
        }
        np(name, name + 8);
        for(int i = 0; i < 8; i++) {
            m[name[i]] = i;
        }
    }
    for(int i = 0; i < 8; i++) {
        cout << name[i] << endl;
    }
    return 0;
}
