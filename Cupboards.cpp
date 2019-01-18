#include <iostream>

using namespace std;

const int x=10e4;
int main(){
    int n;

    cin>>n;

    int l[x],r[x];

    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }
    int l_o_c=0,r_o_c=0,l_c_c=0,r_c_c=0;

    for(int i=0;i<n;i++){
        if(l[i]==0){
            l_c_c++;
        }
        if(r[i]==0){
            r_c_c++;
        }
        if(l[i]==1){
            l_o_c++;
        }
        if(r[i]==1){
            r_o_c++;
        }
    }

    int ans=0;


    ans+=min(l_c_c,l_o_c);
    ans+=min(r_o_c,r_c_c);

    cout<<ans<<endl;
    return 0;





}
