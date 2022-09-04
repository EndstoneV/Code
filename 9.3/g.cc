#include <bits/stdc++.h>
using namespace std;
char word[30][20] = { "114",      "zero",    "one",     "two",       "three",
                      "four",     "five",    "six",     "seven",     "eight",
                      "nine",     "ten",     "eleven",  "twelve",    "thirteen",
                      "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                      "nineteen", "twenty",  "a",       "both",      "another",
                      "first",    "second",  "third" };
int rt(int x) {
    //x^2%100
    return (x * x) % 100;
}//pingfangmo100
int table[] = { 0,  0,  1,  2,  3,  4,  5,  6,  7, 8, 9, 10, 11, 12,
                13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 1, 1,  2,  3 };
int a[10], n;
bool TOP;
char s[100];
int main() {
    for(int i = 1; i <= 6; i++) {
        scanf("%s", s);
        for(int j = 1; j <= 26; j++) {
            if(strcmp(s, word[j]) == 0) {
                n++;
                a[n] = rt(table[j]);
                break;
            }
        }
    }
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++) {
        if(TOP) {
            printf("%02d", a[i]);
        }
        else {
        if(a[i]) {
            printf("%d", a[i]);
            TOP = true;
        }
        }
    }
    if(!TOP)//114514
        printf("0");
    return 0;
}
