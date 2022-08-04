#include<bits/stdc++.h>
using namespace std;
int n;
void merg(int a[], int l, int mid, int r, int t[]){
    int i = l, j = mid + 1, k = l;
    while(i <= mid && j <= r)
        if(a[i] <= a[j])
            t[k++] = a[i++];
        else
            t[k++] = a[j++];
    while(i <= mid)
        t[k++] = a[i++];
    while(j <= r)
        t[k++] = a[j++];
    for(i = l; i <= r; i++)
        a[i] = t[i];
}
void mergesort(int a[], int l, int r, int t[]){
    if(l == r)
        return;
    int mid = l + (r - l) / 2;
    mergesort(a, l, mid, t);
    mergesort(a, mid + 1, r, t);
    merg(a, l, mid, r, t);
}
int main(){
    scanf("%d", &n);
    int a[n + 1], b[n + 1];
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    mergesort(a, 1, n, b);
    for(int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}