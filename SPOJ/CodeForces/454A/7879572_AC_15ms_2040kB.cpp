#include <iostream>
#include <stdio.h>

using namespace std;

int main(){



    int n;
    cin>>n;

    for(int i=1;i<=n;i+=2){
        for(int j=0;j<(n-i)/2;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"D";
        }
        for(int j=0;j<(n-i)/2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-2;i>0;i-=2){
        for(int j=0;j<(n-i)/2;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"D";
        }
        for(int j=0;j<(n-i)/2;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
