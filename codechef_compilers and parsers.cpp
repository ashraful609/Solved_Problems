#include <iostream>
using namespace std;

int main(){


    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int res=0;
        int c=0;

        int counter=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='<'){
                c++;
            }
            else
                c--;


            if(c<0){
                break;
            }


            if(c==0){
                res=i+1;

            }


        }


        cout<<res<<endl;

    }






    return 0;
}
