#include <iostream>

using namespace std;

int gcd(int*,int*);

int main(){
    int N;
    int i,j,G=0;

    while(1){
        cin>>N;
        if(N==0){
            break;
        }

        for(i=1;i<N;i++){
            for(j=i+1;j<=N;j++){
                G+=gcd(&i,&j);

            }
        }
        cout<<G<<endl;
        G=0;
    }




    return 0;
}

int gcd(int *p,int *q){
    int rem;
    int divident=*p;
    int divisor=*q;
    rem=1;
    while(rem!=0){
        rem=divident%divisor;
        divident=divisor;
        divisor=rem;
    }

    return divident;
}