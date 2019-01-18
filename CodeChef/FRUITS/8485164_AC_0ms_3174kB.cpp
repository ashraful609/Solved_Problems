#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;


int main(){


    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int n,m,k;

        scanf("%d%d%d",&n,&m,&k);
        int x=abs(n-m);
        if(x>k){
            printf("%d\n",x-k);
        }
        else
            printf("0\n");


    }





    return 0;
}
