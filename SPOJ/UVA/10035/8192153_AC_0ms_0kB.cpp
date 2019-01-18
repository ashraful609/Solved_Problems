#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    long long a,b,a1,b1;
    long long temp=0;
    while(scanf("%lld %lld",&a,&b) && a!=0 || b!=0){
        long long temp=0;
        long long counter=0;
        while(a!=0 || b!=0){

            a1=a%10;
            b1=b%10;
            a=a/10;
            b=b/10;
            if(a1+b1+temp>9){
                counter++;
                temp=(a1+b1+temp)/10;
            }
            else
                temp=0;



        }

        if(counter==0){
            printf("No carry operation.\n");
        }
        else if(counter==1){
            printf("%lld carry operation.\n",counter);
        }
        else
            printf("%lld carry operations.\n",counter);
    }



    return 0;
}
