#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    int m=1;
    while(m==1){
        cin>>n;
        if(n==-1){
            break;
        }
        int a[n];
        int q=0;
        int p=0;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            q+=a[i];
        }
        if(q%n==0){
            p=q/n;
            for(int i=0;i<n;i++){
                if(a[i]<p){
                    ans+=p-a[i];
                }
            }
            cout<<ans<<endl;

        }
        else
            cout<<"-1"<<endl;
    }

}
