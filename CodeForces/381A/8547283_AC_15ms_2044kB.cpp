#include <iostream>
#include <cstdio>

using namespace std;

int main(){


    int n;
    cin>>n;
    const int x=n;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int t=1;
    int l=0,r=x-1;
    int s=0,d=0;
    while(t<=n){
        if(a[l]>a[r]){
            if(t%2==0){
                d+=a[l];
                l++;
            }
            else{
                s+=a[l];
                l++;
            }
        }
        else{
            if(t%2==0){
                d+=a[r];
                r--;
            }
            else{
                s+=a[r];
                r--;
            }
        }

        t++;
    }

    cout<<s<<" "<<d<<endl;


    return 0;
}

