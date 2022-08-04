#include<bits/stdc++.h>
using namespace std;
int n;
bool odd = false;
int main(){
    scanf("%d",&n);
    if(n%2) odd = true;
    int a[n+1];
    int r[n+1];
    // bool b[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1,greater<int>());
    int x;
    if(odd) x=n/2;
    else x=n/2+1;
    for(int i=1,j;i<=x;i+=2,j++){
        r[i]=a[j];
    }
    for(int i=x,j;i>=1;i-=2,j--){
        r[i]=a[j];
    }
    for(int i=1;i<=n;i++){
        printf("%d\n",r[i]);
    }
    return 0;
}