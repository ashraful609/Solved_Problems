#include <iostream>
#include <cstdio>

using namespace std;

int main(){


    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        const int x=1e5+10;
        int a[x];
        int b[x];
        b[n-1]=1;


        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        if(n==1){
            cout<<"1"<<endl;
        }
        else{


            int j;


            for(j=n-2;j>=0;j--){
                if((a[j]<0 && a[j+1] > 0) || (a[j+1] < 0 && a[j]>0)){
                    b[j]=b[j+1]+1;
                }
                else{
                    b[j]=1;
                }
            }

            for(int q=0;q<n;q++){
                if(q==n-1){
                    cout<<b[q]<<endl;
                }
                else
                    cout<<b[q]<<" ";
            }

        }


    }


    return 0;
}

