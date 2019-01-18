#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    int c=0;
    while(c<t){
        int n,x;
        cin>>n>>x;
        int p=0;
        for(int i=0;i<n;i++){
            int q;
            cin>>q;
            p+=q;
        }

        int ans=x*(n+1)-p;
        cout<<"Case "<<c+1<<": "<<ans<<endl;
        c++;

    }




    return 0;
}
