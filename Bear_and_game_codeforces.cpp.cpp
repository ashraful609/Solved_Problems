#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    const int x=n;

    int a[x];

    for(int i=0;i<x;i++){
        cin>>a[i];
    }

    int i;

    int prev=0;
    for(i=0;i<x;i++){
        if(a[i]-prev<=15){
            prev=a[i];
        }
        else
            break;
    }

    if(prev+15<=90){
        cout<<prev+15<<endl;
    }
    else
        cout<<"90"<<endl;
    return 0;
}
