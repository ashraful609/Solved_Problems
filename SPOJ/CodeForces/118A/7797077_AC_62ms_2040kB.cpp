#include <iostream>

using namespace std;

int main(){


    string s;

    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){

        }
        else{
            cout<<".";
            cout<<s[i];
        }
    }

    return 0;

}
