#include <iostream>

using namespace std;
const int x=100;
int main(){
    string s;
    cin>>s;

    char a[x];
    int c=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1' || s[i]=='2' || s[i]=='3'){

            a[c]=s[i];
            c++;
        }
    }


    for(int i=0;i<=c;i++){
        for(int j=i+1;j<c; j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }


    for(int i=0;i<c;i++){
        cout<<a[i];
        if(i<c-1){
            cout<<"+";

        }
    }





    return 0;
}
