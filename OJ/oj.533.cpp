#include<bits/stdc++.h>    
using namespace std;    
bool a[1000];    
int main()    
{    
    int n;    
    scanf("%d", &n);    
    for (int i = 0; i < 1000; i++)    
		a[i] = true;
    bool k = true;
    int x = n;    
    int count = 0;  
    while(n > 2)    
      {    
        count=0;    
        if(k)  
			for (int i=0;i<x;i++){    
				if (a[i]){    
					count++;
					if (count==3){    
						count=0;  
						a[i]=false;  
						n--;     
						if (n==2) break;    
					}    
                }    
              }    
        else    
          for (int i=x-1;i>=0;i--)
              {    
                if (a[i])
                {    
                    count++;
                      if (count==3) 
                        {    
                            count=0;
                            a[i]=false;  
                            n--;
                            if (n==2) break;  
                        }    
                }    
              }    
        if (k)    
          k=false;
        else    
          k=true;   
      }    
    return 0;    
}
