#include <iostream>

using namespace std;

int main(){

    string a;
    cin>>a;
    int b;
    char d;
    if(a[0]>=97 && a[0]<=122){
        b=a[0];
        b=b-32;
        d=b;
        a[0]=d;
    }

    cout<<a<<endl;

    return 0;
}
