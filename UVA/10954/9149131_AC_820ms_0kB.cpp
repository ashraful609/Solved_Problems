#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){

    int n;

    while(cin>>n){
        if(n==0){
            break;
        }
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        int temp=0;
        int cost=0;
        int i;
        for(i=0;i<n-1;i++){
            sort(a+i,a+n);

            temp=a[i]+a[i+1];
            cost+=temp;
            a[i+1]=temp;
        }

        cout<<cost<<endl;


    }


    return 0;


}
