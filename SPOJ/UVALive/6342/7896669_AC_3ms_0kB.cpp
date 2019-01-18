#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        string s1=s;
        int p=0;

        for(int i=s.size()-1;i>=0;i--){
            s1[p]=s[i];
            p++;
        }
        if(s==s1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }




    return 0;

}
