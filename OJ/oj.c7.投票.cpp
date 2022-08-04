#include<bits/stdc++.h>
using namespace std;
int main(){
	char c[2000],b[27]={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int n,a[27]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	cin>>n;
 	cin>>c+1;
  for(int i = 1; i<=strlen(c+1);i++)
 	{
	switch(c[i]){
		case 'A':
			a[1]++;break;
		case 'B':
			a[2]++;break;
		case 'C':
			a[3]++;break;
		case 'D':
			a[4]++;break;
		case 'E':
			a[5]++;break;
		case 'F':
			a[6]++;break;
		case 'G':
			a[7]++;break;
		case 'H':
			a[8]++;break;
		case 'I':
			a[9]++;break;
		case 'J':
			a[10]++;break;
		case 'K':
			a[11]++;break;
		case 'L':
			a[12]++;break;
		case 'M':
			a[13]++;break;
		case 'N':
			a[14]++;break;
		case 'O':
			a[15]++;break;
		case 'P':
			a[16]++;break;
		case 'Q':
			a[17]++;break;
		case 'R':
			a[18]++;break;
		case 'S':
			a[19]++;break;
		case 'T':
			a[20]++;break;
		case 'U':
			a[21]++;break;
		case 'V':
			a[22]++;break;
		case 'W':
			a[23]++;break;
		case 'X':
			a[24]++;break;
		case 'Y':
			a[25]++;break;
		case 'Z':
			a[26]++;break;
		case '#':
			break;
		default:
			break;
	}
}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]<a[j])
			{
				swap(b[i],b[j]);
				swap(a[i],a[j]);
			}
			else if(a[i]==a[j]&&char(b[j])<char(b[i]))
			{
			 swap(b[i],b[j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<":"<<a[i]<<endl;
	} 
}/*
4
BBBBDDDCFADDCBBBAABBDDCFFE#
*/

