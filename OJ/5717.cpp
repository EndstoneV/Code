#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[2];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[0]+a[1]<=a[2]){cout<<"Not triangle"; return 0;}
	if(pow(a[0],2)+pow(a[1],2)==pow(a[2],2)) cout<<"Right triangle"<<endl;
	if(pow(a[0],2)+pow(a[1],2)>pow(a[2],2)) cout<<"Acute triangle"<<endl;
	if(pow(a[0],2)+pow(a[1],2)<pow(a[2],2)) cout<<"Obtuse triangle"<<endl;
	if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2]) cout<<"Isosceles triangle"<<endl;
	if(a[0]==a[1]&&a[1]==a[2]) cout<<"Equilateral triangle"; 
}
