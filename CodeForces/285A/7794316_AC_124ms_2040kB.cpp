#include <iostream>


using namespace std;

int main(){

    int n;
    int k;

    cin>>n>>k;
    int i;

    for(i=1;i<n-k;i++){
        cout<<i<<" ";
    }

    for(int j=n;j>=i;j--){
        cout<<j<<" ";
    }


    return 0;
}

