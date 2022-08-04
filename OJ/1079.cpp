#include<bits/stdc++.h>
using namespace std;
string key,s;
int k[1005];
char ans[1005];
int main(){
	freopen("vigenere.in","r",stdin);
	freopen("vigenere.out","w",stdout);
    cin>>key>>s;
    int len=key.length();
    for(int i=0;i<len;i++){
        if(key[i]>='A'&&key[i]<='Z')
            k[i]=(int)(key[i]-65);
        else
            k[i]=(int)(key[i]-97);
    }
    for(int i=0;i<s.length();i++){
        ans[i]=s[i]-k[i%len];
        if(s[i]>='A'&&s[i]<='Z'&&ans[i]<'A')
            ans[i]+=26;
        else if(s[i]>='a'&&s[i]<='z'&&ans[i]<'a')
            ans[i]+=26;
        cout<<ans[i];
    }
}
