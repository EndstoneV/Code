#include<bits/stdc++.h>
using namespace std;
int n;
void insertionsort(int a[], int n){
    if(n == 1)
        return;
    insertionsort(a, n - 1);
    int i, tmp = a[n];
    for(i = n - 1; i >= 1; i--){
        if(a[i] > tmp) 
            a[i + 1] = a[i];
        else 
            break;
    }
    a[i + 1] = tmp;
}
int main(){
    scanf("%d", &n);
    int a[n + 1];
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    insertionsort(a, n);
    for(int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}