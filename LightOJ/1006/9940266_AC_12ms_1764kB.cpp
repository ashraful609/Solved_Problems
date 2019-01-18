#include <iostream>
#include <cstdio>


using namespace std;

long long arr[10020];

int main(){

    long long n,cn=0,t;
    cin>>t;

    while(t--){

        for(long long i=0;i<6;i++){
            cin>>arr[i];
        }
        cin>>n;

        //int temp=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5])%10000007;
        for(long long i=6;i<=n;i++){
            arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007;
        }

        cout<<"Case "<<++cn<<": "<<arr[n]%10000007<<endl;

    }


    return 0;
}

