#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int n;
    string s;

    cin>>n;
    cin>>s;

    char a[n];
    for(int i=0;i<n;i++){
        a[i]=s[i];
    }


    int k=0;

    for(int i=0;i<n;i++){
        if(i!=0){
            if(a[i-1]==a[i]){
                k++;
            }
        }

    }

    cout<<k<<endl;



    return 0;


}
