#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n,k,b,t,ans;

    while(scanf("%d",&n)!=EOF){
        scanf("%d",&k);
        ans=n;
        b=n;

        while(b>=k){
            ans+=b/k;
            int c=b%k;
            b=(b/k)+c;

        }
        cout<<ans<<endl;
    }

    return 0;
}
