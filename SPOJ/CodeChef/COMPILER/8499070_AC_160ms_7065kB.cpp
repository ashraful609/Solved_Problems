#include <iostream>
using namespace std;

int main(){


    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int res[s.size()];
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
                res[counter]=i+1;
                counter++;
            }


        }

        int ans=0;
        for(int i=0;i<counter;i++){
            if(res[i]>ans){
                ans=res[i];
            }
        }
        cout<<ans<<endl;

    }






    return 0;
}
