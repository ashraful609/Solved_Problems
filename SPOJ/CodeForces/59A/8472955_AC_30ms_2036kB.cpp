#include <iostream>
#include <cstdio>

using namespace std;

int main(){


    string s;
    cin>>s;
    int counter1=0,counter2=0;

    for(int i=0;i<s.size();i++){
        if(s[i]>90){
            counter1++;
        }

    }

    counter2=s.size()-counter1;


    if(counter2>counter1){
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    else {
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }

    cout<<s<<endl;


    return 0;
}
