#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char a1[20], a2[20], a3[20];
int ans[200], maxx, minn = 1e9, maxx1, minn1, midd1, midd;
int main() {
    scanf("%s%s%s", a1, a2, a3);
    if(a1[1] == '>')
        ans[a1[0]]++;
    else
        ans[a1[2]]++;
    if(a2[1] == '>')
        ans[a2[0]]++;
    else
        ans[a2[2]]++;
    if(a3[1] == '>')
        ans[a3[0]]++;
    else
        ans[a3[2]]++;
    for(int i = 'A'; i <= 'C'; i++) {
        if(ans[i] > maxx) {
            maxx  = ans[i];
            maxx1 = i;
        }
        if(ans[i] < minn) {
            minn  = ans[i];
            minn1 = i;
        }
    }
    midd = 3 - maxx - minn;
    for(int i = 65; i <= 67; i++) {
        if(ans[i] == midd)
            midd1 = i;
    }
    if(maxx == midd || minn == maxx || midd == maxx) {
        cout << "Impossible";
        return 0;
    }
    printf("%c%c%c", minn1, midd1, maxx1);
}
