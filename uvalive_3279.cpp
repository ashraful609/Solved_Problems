#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;


int main(){

    string n1,n2,p;
    int n;

    while(cin>>n1>>n2>>p && n1!="#" && n2!="#" && p!="#"){

        cin>>n;
        int counter1=0,counter2=0;
        int d;
        for(int i=0;i<n;i++){
            cin>>d;
            if(d==1 || d==3 || d==5){
                counter1++;
            }
            else
                counter2++;
        }

        if(p=="even"){
            cout<<n1<<" "<<counter1<<" "<<n2<<" "<<counter2<<endl;
        }
        else
            cout<<n1<<" "<<counter2<<" "<<n2<<" "<<counter1<<endl;

    }


    return 0;
}
