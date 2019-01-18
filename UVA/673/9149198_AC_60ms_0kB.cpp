#include <iostream>
#include <stack>
#include <cstring>
#include <stdio.h>

using namespace std;

int main(){



    int t;

    cin>>t;

    getchar();

    while(t--){

        char s[150];

        stack<char> pb;

        gets(s);

        int i;

        for(i=0;i<strlen(s);i++){
            if(s[i]=='(' || s[i]=='['){
                pb.push(s[i]);
            }
            else if(s[i]==']'){
                if(pb.empty() || pb.top()!='['){
                    break;
                }
                pb.pop();
            }
            else if(s[i]==')'){
                if(pb.empty() || pb.top()!='('){
                    break;
                }
                pb.pop();
            }
        }


        if(i==strlen(s) && pb.empty()){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;


    }


    return 0;


}
