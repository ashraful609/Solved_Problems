#include <iostream>
#include <algorithm>


using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(next_permutation(a,a+n)){
            for(int i=0;i<n;i++){
                cout<<a[i];
            }
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;

}
