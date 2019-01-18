#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n,m;

    cin>>n>>m;
    int p;
    int flag=0;
    p=n+1;
    while(flag<=0){
        int i;
        for(i=2;i<p;i++){
            if(p%i==0){
                break;
            }
        }

        if(i==p){
            flag++;
        }
        else
            p++;
    }

    if(m==p){
        printf("YES\n");
    }
    else
        printf("NO\n");


    return 0;
}
