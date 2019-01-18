#include <iostream>

using namespace std;

int bigmod(long a,long p,long m){
    int res=1;

    while(p>0){
        if(p&1){
            res=((res%m)*(a%m))%m;

        }
        a=(a%m);
        a=a*a;
        a=a%m;
        p>>=1;
    }
    return res;

}



int main(){



    long long b, P, M;

    while(cin>>b>>P>>M){
        cout<<bigmod(b,P,M)<<endl;
    }
    return 0;

}
