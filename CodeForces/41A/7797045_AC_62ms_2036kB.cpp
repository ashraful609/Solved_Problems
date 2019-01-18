#include <iostream>

using namespace std;

int main(){

    string s,p;
    cin>>s>>p;
    int q=s.size()-1;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]!=p[q]){
            break;
        }
        q--;
    }

    if(i==s.size()){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


    return 0;

}
