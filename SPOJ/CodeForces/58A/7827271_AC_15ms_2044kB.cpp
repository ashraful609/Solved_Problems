#include <iostream>
using namespace std;

int main(){

    string s;
    cin>>s;
    char q[5]={'h','e','l','l','o'};
    int p=0;
    int c=0;

    for(int i=0;i<s.size();i++){
        if(s[i]==q[p]){
            p++;
            c++;
        }
    }

    if(c==5){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;



    return 0;

}
