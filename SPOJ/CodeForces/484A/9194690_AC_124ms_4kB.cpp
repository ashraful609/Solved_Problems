#include <iostream>
#include <math.h>


using namespace std;


int main(){

    long long t;

    cin>>t;



    while(t--){
        long long l,r;
        cin>>l>>r;

        long long a=l;
        long long b=1;
            while(1){
                if((a|b)>r){
                    break;
                }

                else{
                    a=a|b;
                }

            b=b<<1;
        }
        cout<<a<<endl;

    }


    return 0;

}
