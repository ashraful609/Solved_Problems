#include <iostream>


using namespace std;

int main(){


    int t;

    cin>>t;

    while(t--){

        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<(long long)x*x<<endl;
        }
        else
            cout<<(long long)y*y<<endl;


    }

    return 0;
}
