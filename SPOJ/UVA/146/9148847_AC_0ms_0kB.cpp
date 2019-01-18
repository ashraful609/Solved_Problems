#include<cstdio>
#include<iostream>
#include<algorithm>
#include <string.h>

using namespace std;

int main(){

    char s[60];

    while(cin>>s){
        if(s[0]=='#'){
            break;
        }
        if(next_permutation(s,s+strlen(s))){
            cout<<s<<endl;
        }
        else {
            cout<<"No Successor"<<endl;
        }
    }

    return 0;
}
