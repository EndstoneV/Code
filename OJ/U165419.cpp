/*  ********************
C6 É¾³ý×î´óÊý 
	********************
*/
#include<bits/stdc++.h>
using namespace std;
int a[102],gs,mxm,cnt;
int main(){
	cin>>gs;
	for(int i=0;i<gs;i++){
		cin>>a[i];
	}
	mxm=a[0];
	for(int i=0;i<gs;i++){
		if(a[i]>mxm) mxm=a[i];
	}
	for(int i=0;i<gs;i++){
		if(a[i]!=mxm) {
		cout<<a[i]<<" ";
		cnt++;
	}}
	if(cnt==0) cout<<"none";
	return 0;
}

