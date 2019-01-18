#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int t;
    cin>>t;


    for(int i=0;i<t;i++){
        int st,en;
        cin>>st>>en;
        if(st<=2){
            cout<<"2"<<endl;
        }
        for(int j=3;j<=en;j++){
            int l=sqrt(j);
            int k;
            for(k=2;k<l;k++){
                if(j%k==0){
                break;
                }
            }
            if(k==l){
                cout<<j<<endl;
            }
        }
    }


    return 0;
}
