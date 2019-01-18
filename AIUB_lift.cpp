#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int i=0;
    while(i<n){

        int x,y;
        cin>>x>>y;

        cout<<"Case "<<i+1<<": "<<(abs(x-y)+(x-0))*4+19<<endl;

        i++;
    }




    return 0;
}
