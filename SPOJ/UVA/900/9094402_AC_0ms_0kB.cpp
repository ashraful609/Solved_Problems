#include <iostream>

using namespace std;

int main(){





     long long n;

     while(cin>>n){
        long long a1=1;
        long long a2=2;
        if(n==0){
            break;
        }
        if(n==1){
            cout<<"1"<<endl;
        }
        else if(n==2){
            cout<<"2"<<endl;
        }
        else{
            long long ans=0;
            for(long long i=3;i<=n;i++){
                ans=a1+a2;
                a1=a2;
                a2=ans;
            }
            cout<<ans<<endl;
        }
     }







    return 0;

}
