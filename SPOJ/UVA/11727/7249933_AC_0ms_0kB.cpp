#include <iostream>

using namespace std;

int main(){

    int T;

    cin>>T;

    int ans[T];

    int a,b,c;

    for(int i=0;i<T;i++){

        cin>>a;
        cin>>b;
        cin>>c;
        if(a>b){
            if(b>c){
                    ans[i]=b;
            }
            else{
                    if(c>a){
                        ans[i]=a;
                    }
                    else{
                        ans[i]=c;
                    }

            }
            }

            else{
                if(a>c){
                        ans[i]=a;

                }
                else{
                    if(c>b){
                        ans[i]=b;
                    }
                    else{
                        ans[i]=c;
                    }
                }
            }
        }


    for(int i=0;i<T;i++){

        cout<<"Case "<<i+1<<": "<<ans[i]<<endl;
    }


    return 0;
}
