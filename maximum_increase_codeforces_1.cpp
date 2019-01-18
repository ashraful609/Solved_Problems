#include <iostream>

using namespace std;


int main(){

    int n;
    cin>>n;
    int p;
    int prev=1;
    int q=0;
    int c=1;
    int counter=1;

    while(q<n){
        cin>>p;


        if(q==0){

        }
        else{
            if(p>prev){

                c++;
            }
            else{
                if(c>counter){
                    counter=c;
                }
                c=1;
            }
        }
        prev=p;


        q++;
    }

    if(c>counter){
        counter=c;
    }


    cout<<counter<<endl;


    return 0;
}
