#include <iostream>
#include <cstdio>

using namespace std;



int x[100000+10];



int main(){


    int i,j;



    for(i=2;i<=100000+10;i++){
        if(x[i]==0){
            x[i]=1;
            for(j=2;j*i<=100000+10;j++){
                x[i*j]++;
                }
        }
    }

    int t;
    cin>>t;

    while(t--){
        long a,b,k;
        long counter=0;
        cin>>a>>b>>k;

        for(long i=a;i<=b;i++){
            if(x[i]==k){
                counter++;
            }
        }

        cout<<counter<<endl;
    }





    return 0;

}
