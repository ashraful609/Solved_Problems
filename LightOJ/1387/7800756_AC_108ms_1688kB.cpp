#include <iostream>
#include <string.h>


using namespace std;

int main(){


    int t;
    cin>>t;

    int v=0;
    while(v<t){

        int n;
        cin>>n;
        int counter=0;
        const int x=102;
        int amount_ar[x];
        int money=0;

        for(int i=0;i<=n;i++){
            string s;

            getline(cin,s);

            if(s=="report"){
                amount_ar[counter]=money;
                counter++;
            }
            else{
                int p=0;
                for(int i=7;i<s.size();i++){
                    p=p*10+(s[i]-48);
                }
                money+=p;
            }


        }
        if(counter>0){
            cout<<"Case "<<v+1<<":"<<endl;
            for(int i=0;i<counter;i++){
                cout<<amount_ar[i]<<endl;
            }
        }

        v++;
    }




    return 0;
}
