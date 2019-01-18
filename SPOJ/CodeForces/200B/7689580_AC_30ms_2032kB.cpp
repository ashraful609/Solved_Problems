#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    double v=0;

    for(int i=0;i<n;i++){
        double t;
        cin>>t;
        v+=t;
    }

    v=v/n;

    printf("%.12f",v);



    return 0;

}
