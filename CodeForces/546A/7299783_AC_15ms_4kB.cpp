#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int n,k,w;

    cin>>k>>n>>w;
    int p=0;


    for(int i=1;i<=w;i++){
        p=p+(i*k);
    }
    if(p<n){
        cout<<0<<endl;
    }
    else{
        cout<<p-n<<endl;
    }


    return 0;


}
