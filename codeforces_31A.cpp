#include <iostream>

using namespace std;

int main(){


    int t;
    cin>>t;

    const int x=t;

    int a[x];
    int p=0;

    for(int i=0;i<x;i++){
        cin>>a[i];
    }

    int i;
    for(i=0;i<x;i++){

        for(int j=0;j<x;j++){

            for(int k=0;k<x;k++){
                if(j != i && k != i && k != j && a[i]==a[j]+a[k]){
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"-1"<<endl;



    return 0;
}
