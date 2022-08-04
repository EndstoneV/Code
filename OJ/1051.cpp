#include<bits/stdc++.h>
using namespace std;
struct feffafig{
    char name[25];
    int grade,judge;
    char ganb,west;
    int lunw;
    int money;
    int sum;
}a[101];
int n,sum=0;
bool cmp(feffafig x,feffafig y)
{
    if(x.money==y.money)return x.sum<y.sum;
    else return x.money>y.money;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].name>>a[i].grade>>a[i].judge>>a[i].ganb>>a[i].west>>a[i].lunw;
        if(a[i].grade>80&&a[i].lunw>=1)a[i].money+=8000;
        if(a[i].grade>85&&a[i].judge>80)a[i].money+=4000;
        if(a[i].grade>90)a[i].money+=2000;
        if(a[i].west=='Y'&&a[i].grade>85)a[i].money+=1000;
        if(a[i].judge>80&&a[i].ganb=='Y')a[i].money+=850;
        a[i].sum=i;
        sum+=a[i].money;
    }
    sort(a+1,a+n+1,cmp);
    printf("%s\n%d\n%d",a[1].name,a[1].money,sum);
    return 0;
} 
