#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int a[5][5];
    int i,j,k,l;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
               k=i,l=j;
            }
        }
    }

    cout<<fabs(2-k)+fabs(2-l)<<endl;

    return 0;


}
