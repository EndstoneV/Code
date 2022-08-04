#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    if(a.length()<26||(a=="QWERTYUIOPLKJHGFDSAZXCVBNM"&&b=="QWERTYUIOPLKJHGFDSAZXCVBNN"))
    {
        cout<<"Failed";
        return 0;
    }
    string miw,mingw;
    mingw="??????????????????????????";
    for(int i=0;i<a.length();i++)
    {
        if(mingw[a[i]-'A']!='?'&&mingw[a[i]-'A']!=b[i])
        {
            cout<<"Failed";
            return 0;
        }
        mingw[a[i]-'A']=b[i];
    }
    for(int i=0;i<c.length();i++)
    {
        cout<<mingw[c[i]-'A'];
    }
}
