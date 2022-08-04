#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[203];
	int cnt=0;
	gets(s);
//	puts(s);
	int len=strlen(s+1);
	for(int i=1;i<=len;i++){
		switch (s[i]){
			case 'a':
				cnt++;
			case 'b':
				cnt+=2;
			case 'c':
				cnt+=3;
			case 'd':
				cnt+=1;
			case 'e':
				cnt+=2;
			case 'f':
				cnt+=3;
			case 'g':
				cnt+=1;
			case 'h':
				cnt+=2;
			case 'i':
				cnt+=3;
			case 'j':
				cnt+=1;
			case 'k':
				cnt+=2;
			case 'l':
				cnt+=3;
			case 'm':
				cnt+=1;	 
			case 'n':
				cnt+=2;
			case 'o':
				cnt+=3;
			case 'p':
				cnt+=1;
			case 'q':
				cnt+=2;
			case 'r':
				cnt+=3;
			case 's':
				cnt+=4;
			case 't':
				cnt+=1;
			case 'u':
				cnt+=2;
			case 'v':
				cnt+=3;
			case 'w':
				cnt+=1;
			case 'x':
				cnt+=2;
			case 'y':
				cnt+=3;
			case 'z':
				cnt+=4;
			default:
				cnt++; 
		}
		cout<<cnt<<" ";
	} 
//	cout<<cnt;
}
