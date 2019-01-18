#include <iostream>
using namespace std;

int main(){
    int n;
    int m;

    cin>>n;
    cin>>m;

    int a[m];


    for(int i=0;i<m;i++){
        a[i]=0;

    }



    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;j<x;j++){
            int p;
            cin>>p;
            a[p-1]=1;

        }
    }

    int i;

    for(i=0;i<m;i++){
        if(a[i]==1){

        }
        else
            break;
    }

    if(i==m){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;




    return 0;
}
