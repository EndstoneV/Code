#include<iostream>
#include<stdio.h>
using namespace std;

char a[200][200];
int n, m;
bool is0(char a){
    return (a != '#');
}
int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    for(int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if(a[i][j] == '#'){
                if(is0(a[i - 1][j]))
                    a[i - 1][j]++;
                if(is0(a[i - 1][j - 1]))
                    a[i - 1][j - 1]++;
                if(is0(a[i][j - 1])) 
                    a[i][j - 1]++;
                if(is0(a[i][j + 1])) 
                    a[i][j + 1]++;
                if(is0(a[i + 1][j])) 
                    a[i + 1][j]++;
                if(is0(a[i + 1][j + 1])) 
                    a[i + 1][j + 1]++;
                if(is0(a[i - 1][j + 1])) 
                    a[i - 1][j + 1]++;
                if(is0(a[i + 1][j - 1])) 
                    a[i + 1][j - 1]++; 
            }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == '#') putchar('#');
            else printf("%d", a[i][j] - '?' + 17);
        }
        printf("\n");
    }
    return 0;
}
// 35 is #
// 63 is ?