#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[9];
	cin>>s;
	int cnt(0);
	for(int i=0;i<=strlen(s);i++){
		if(s[i]=='1'){
			cnt ++;
		}
	}
	cout<<cnt;
}
