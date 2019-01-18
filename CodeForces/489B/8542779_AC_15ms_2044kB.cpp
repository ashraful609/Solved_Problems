#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;


int main(){


    int n,m;

    cin>>n;
    const int x=n;
    int a[x];

    for(int i=0;i<x;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    cin>>m;

    const int y=m;
    int b[y];

    for(int i=0;i<y;i++){
        cin>>b[i];
    }



    int counter=0,counter2;
    int i,j;
    sort(b,b+m);
    for(i=0;i<n;i++){
        counter2=0;
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                counter++;
                counter2=1;

                break;
            }
            else if(b[j]==a[i]-1 || b[j]==a[i]+1){
                counter++;
                counter2=1;

                break;
            }


        }
        if(counter2==1){
            for(int k=j;k<m-1;k++){
                swap(b[k],b[k+1]);
            }
            m--;
        }
    }

    cout<<counter<<endl;







    return 0;
}
