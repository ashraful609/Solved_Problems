#include <iostream>

using namespace std;

int main(){

    int T;

    cin>>T;

    int ans[T];

    int a,b;

    for(int i=0;i<T;i++){

        cin>>a;
        cin>>b;
        ans[i]=a+b;
    }


    for(int i=0;i<T;i++){

        cout<<"Case "<<i+1<<": "<<ans[i]<<endl;
    }


    return 0;
}
