#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
int mp[5500][5500];
int n,m,tim;
int tmp;
int jx,jy,nx,ny;
int pn;
int ans;
struct posizione{
    int x,y,sum;
}p[25*25];
bool c(posizione a,posizione b){
    return a.sum>b.sum;
}
void Erdnuss(int i,int j){
	pn++;
    p[pn].sum=mp[i][j];
    p[pn].x=i;
    p[pn].y=j;
}
int Entfernung(){
	int tmpx=abs(jx-nx);
    int tmpy=abs(jy-ny);
    tmp=tmpx+tmpy;
    return tmp;
}
int main(){
    scanf("%d%d%d",&n,&m,&tim);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&mp[i][j]);
            if(mp[i][j]>0){ //Erdnuss
            	Erdnuss(i,j);
            }
        }
    }
    /////////////
    sort(p+1,p+pn+1,c);//paixu
    /////////////
	jx=1;
	jy=p[1].y;
	tim--;
    for(int i=1;i<=pn;i++){
        tmp=0;
        nx=p[i].x;
        ny=p[i].y;
        Entfernung();
        tim -= tmp;
		tim--;//多多在每个单位时间内，可以采摘一棵植株下的花生
        if(tim>=nx){//Erd
            ans+=mp[nx][ny];
            jx=nx;
            jy=ny;
        }
        else{//back
            printf("%d",ans);
            return 0;
        }
    }
    printf("%d",ans);
    return 0;
}

