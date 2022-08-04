#include<bits/stdc++.h>
using namespace std;
int a[26][2],flag=0,k;
char nsr[26];
int main()
{
    int n;
    char a1, b1, c;
    //%*cмл 
    scanf("%d",&n);
    while(scanf("%d%*c", &n) && n!=-1){
        a[0][0]=97,a[0][1]=1;
        for (int i=0;i<n;i++){
            scanf("%c%c%c%*c",&a1,&c,&b1);
            a[a1-97][0]=a1;
            a[a1-97][1]=a[b1-97][1];
 
        }
        for (int i=0;i<26;i++){
            if (a[i][1]){
                nsr[i]=1;
                k=i;
            }
        }
        for (int i=0;i<26;i++){
            if (nsr[i] && i!=k){
                printf("%c ",i+97);
                ++flag;
            }
            else{
                if(nsr[i]){
                    printf("%c\n", i+97);
                    ++flag;
                }
            }
        }
        if (!flag)
            printf("none");
    }
    return 0;
}
