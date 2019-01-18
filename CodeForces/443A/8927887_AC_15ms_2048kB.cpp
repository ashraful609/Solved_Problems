#include <iostream>
#include <cstring>

using namespace std;

int main(){

    int a[26]={0};

    string s;
    getline(cin,s);

    for(int i=0;i<s.size();i++){

        if(s[i]>=97 && s[i]<=122){
            int x=s[i];
            a[x-97]++;
        }

    }

    int counter=0;


    for(int i=0;i<26;i++){
        if(a[i]>0){
            counter++;
        }
    }


    cout<<counter<<endl;

    return 0;

}
