#include <iostream>

using namespace std;

int main(){


    long long n;

    while(cin>>n){
        if(n<0){
            break;
        }

        long long x=(n*(1+n))/2;

        cout<<x+1<<endl;
    }





    return 0;
}
