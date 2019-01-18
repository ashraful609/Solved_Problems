#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    long long a,b;
    cin>>a>>b;
    int s[100],k[100],l[100];
    int i=0;
    while(a!=0 || b!=0){
        k[i]=a%10;
        l[i]=b%10;
        a=a/10;
        b=b/10;
        i++;
    }

    cout<<i<<endl;

    for(int m=i-1;m>=0;m--){
        if(k[m]==l[m]){
            cout<<"0";
        }
        else
            cout<<"1";
    }
    cout<<endl;

    return 0;
}
