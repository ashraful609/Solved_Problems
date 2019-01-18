#include <iostream>

using namespace std;

int main(){

    string a;
    cin>>a;
    int b;
    char c;
    if(a[0]>=97 && a[0]<=122){
        b=a[0];
        b=b-32;
        c=b;
        a[0]=c;
    }

    cout<<a<<endl;

    return 0;
}
