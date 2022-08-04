#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int pair[13] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2}, last, tmp, cnt = 0, a[19] = { 0, 7, 9, 10, 5,  8, 4, 2, 1, 6, 3, 7, 9,  10, 5, 8, 4, 2};
        char x;
        for(int i = 1; i <= 17; i++) scanf("%1d", &tmp), cnt += tmp * a[i];
        cnt %= 11;
        x = getchar();
        if(x == 'X') last = 2;
        else last = pair[(x - '0')];
        if(cnt == last) printf("True\n");
        else printf("False\n");
    }
}