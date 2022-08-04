#include<bits/stdc++.h>
using namespace std;
int qian, hua, mom, meiqian;
bool  youqian = true;
int main(){
    for(int i = 1; i <= 12; ++ i){
        qian += 300;
        scanf("%d", &hua);
        qian -= hua;
           if(qian < 0)
           {     
              youqian = false;
              meiqian = i;
              break;
           }
        mom += qian / 100;
        qian %= 100;       
    }    
    if(youqian){
        qian += mom * 120;    
        printf("%d", qian);
    }            
    else{
        printf("-%d", meiqian);
    }    
    return 0;
}
