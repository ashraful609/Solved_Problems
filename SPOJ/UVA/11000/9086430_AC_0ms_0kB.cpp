#include <iostream>

using namespace std;

int main(){

    long long n;

    while(cin>>n){

        if(n<0){
            break;
        }
        long long m=0;
        long long f=1;

        long long total=1;
        long long temp=0;
        for(long long i=1;i<=n;i++){
            temp=m;
            m=total;
            total=(temp*2)+f+1;
            f=total-m;

        }

        cout<<m<<" "<<total<<endl;

    }


    return 0;

}
