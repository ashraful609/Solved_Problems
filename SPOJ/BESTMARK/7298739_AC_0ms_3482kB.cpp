#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int t,q1,q2,q3,n;

    cin>>t;
    int h;


    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){

            cin>>q1>>q2>>q3;
            a[j]=q1+q2+q3;
        }
        h=a[0];

        for(int k=0;k<n;k++){

            if(a[k]>h){
                h=a[k];
            }
        }
        cout<<h<<" ";
        int p=0;
        for(int c=0;c<n;c++){
            if(a[c]==h){
                p++;
            }
        }
        cout<<p<<endl;
    }
    
    return 0;


}
