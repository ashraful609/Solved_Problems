#include <iostream>

using namespace std;

int main(){


    long long n;

    cin>>n;

    long long dg=0;
    long long x=0;
    long long counter=0;
    while(n!=0){
        x=n%10;
        if(x==4){
            counter+=1*(1<<dg);
        }
        if(x==7){
            counter+=2*(1<<dg);
        }

        n=n/10;
        dg++;
    }


    cout<<counter<<endl;





    return 0;

}
