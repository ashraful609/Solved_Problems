#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    for(int j=0;j<t;j++){
        int n,p,q;
        cin>>n>>p>>q;
        const int x=n;
        int eggs[x];
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            eggs[i]=e;
        }
        int i;
        int total=0;
        for(i=1;i<=p && i<=n;i++){
            total=total+eggs[i-1];
            if(total>q){
                break;
            }
        }
        cout<<"Case "<<j+1<<": "<<i-1<<endl;
    }



    return 0;
}
