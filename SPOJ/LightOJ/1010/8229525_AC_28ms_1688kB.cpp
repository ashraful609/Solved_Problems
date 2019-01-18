#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
int main()
{
   int t;

   scanf("%d",&t);

   int knight;
   for(int i=0;i<t;i++){
    int m,n;
    scanf("%d %d",&m,&n);

    if(m==1 || n==1){
        if(m==1){
            knight=n;
        }
        else{
            knight=m;
        }
    }
    else if(m==2 || n==2){
        if(m==2){
            if(n%4==2){
                knight=n+2;
            }
            else if(n%4==0){
                knight=n;
            }
            else
                knight=n+1;
        }
        else{
            if(m%4==2){
                knight=m+2;
            }
            else if(m%4==0){
                knight=m;
            }
            else
                knight=m+1;
        }

    }
    else{
        if((n*m)%2==0){
            knight=(n*m)/2;
        }
        else
            knight=((n*m)/2)+1;
    }

    printf("Case %d: %d\n",i+1,knight);
   }

   return 0;
}
