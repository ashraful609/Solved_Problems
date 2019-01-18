#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    const int x=a;
    int p[x];
    int d;
    int max_=0;
    for(int i=0;i<a;i++){
        cin>>p[i];
    }

    int ansp=0;
    int ans=0;
    if(a==1){
        cout<<b<<endl;
    }else{
        for(int j=0;j<a-1;j++){
            max_=0;
            for(int i=j;i<a;i++){

                if(i==j){
                    ans=b%p[i];
                    d=b/p[i];
                }
                else{
                    if(p[i]>max_){
                        max_=p[i];
                    }

                }
            }
            ans=ans+(d*max_);
            if(ans>ansp){
                ansp=ans;
            }
        }

        if(ansp>b){
            cout<<ansp<<endl;

        }
        else
            cout<<b<<endl;
    }







    return 0;
}
