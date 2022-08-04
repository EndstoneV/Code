#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,z=0;
    cin>>n;
    for(int i=1;; i++)
    {
        for(int j=0; j<i; j++)
        {
            z+=i;
            s++;
            if(s==n)
            {
                cout<<z<<endl;
                return 0;
            }
        }
    }
}
