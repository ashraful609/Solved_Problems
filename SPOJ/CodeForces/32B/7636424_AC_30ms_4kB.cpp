#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]=='-' && s[i+1]=='-'){
            printf("2");
            i++;
        }
        else if(s[i]=='.' && s[i+1]=='-'){
            printf("0");
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            printf("1");
            i++;
        }
        else if(s[i]=='.'){
            printf("0");
        }
    }
    return 0;
}
