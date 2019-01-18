#include <iostream>
#include <cstdio>
#include <cstdio>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
    int c=1,p=0;

    int a[1000];

    for(int i=1;i<=n;i+=2){
        for(int j=0;j<i;j++){
                a[j]=c;
                c+=2;
        }
    }

    for(int i=n-3;i<n;i++){
        p+=a[i];
    }
    printf("%d\n",p);
    }






    return 0;
}
