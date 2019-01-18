#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    string a,b;

    cin>>a>>b;

    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            printf("1");
        }
        else
            printf("0");
    }

    return 0;
}
