#include <iostream>
#include <cstring>

using namespace std;

int main(){


    int k;

    string s;
    cin>>k>>s;

    int a[26]={0};

    for(int i=0;i<s.size();i++){
        a[s[i]-'a']+=1;
    }
    int c=0;
    char alph[s.size()];

    bool x=0;

    for(int i=0;i<26;i++){
        if(a[i]>0){
            alph[c]=i+97;
            if(a[i]%k!=0){
                x=1;
                break;
            }
            c++;
        }
    }

    if(x==0){
        for(int l=0;l<k;l++){
            for(int i=0;i<c;i++){
                for(int j=0;j<a[alph[i]-97]/k;j++){
                    cout<<alph[i];

                }
            }
        }
    }
    else
        cout<<"-1"<<endl;


    return 0;

}
