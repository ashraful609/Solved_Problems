#include <iostream>

using namespace std;

int r,c;
int g(int,int);



int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>r>>c;
        int x;
        x=g(1,1);

        cout<<x<<endl;

    }

    return 0;
}


int g(int i,int j){
    int ans=0;

    if(i==r && j==c){
        return 1;
    }
    if(i<r){
        ans+=g(i+1,j);
    }
    if(j<c){
        ans+=g(i,j+1);
    }
    return ans;


}
