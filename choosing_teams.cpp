#include <iostream>

using namespace std;

int main(){


    int n;
    int k;

    cin>>n>>k;
    int counter=0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x<=5-k){
            counter++;
        }
    }

    cout<<counter/3<<endl;

    return 0;
}
