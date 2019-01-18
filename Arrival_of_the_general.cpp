#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int max_v=0,max_i=0,min_v=999999,min_i;

    for(int i=0;i<n;i++){
        if(max_v<a[i]){
            max_v=a[i];
            max_i=i;

        }
        if(min_v>=a[i]){
            min_v=a[i];
            min_i=i;
        }
    }

    if(min_i-max_i>0){
        cout<<(max_i-0)+((n-1)-min_i)<<endl;

    }
    else
        cout<<((max_i-0)+((n-1)-min_i))-1<<endl;


    return 0;
}
