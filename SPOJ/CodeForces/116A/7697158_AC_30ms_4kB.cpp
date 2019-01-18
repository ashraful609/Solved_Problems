#include <iostream>

using namespace std;
const int x=1000;
int main(){

    int n;
    cin>>n;
    int a[x];

    int out,in;

    int counter1=0,counter=0;

    for(int i=0;i<n;i++){
        cin>>out;
        counter-=out;
        cin>>in;
        counter+=in;
        if(counter>counter1){
            counter1=counter;
        }

    }

    cout<<counter1<<endl;


    return 0;
}
