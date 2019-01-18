#include <iostream>

using namespace std;

int main(){

    int even=0,odd=0;

    int ev_ind,odd_ind;

    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
            if(even==1){
            ev_ind=i;

        }

        }
        else{
            odd++;
            if(odd==1){
            odd_ind=i;
        }
        }

    }

    if(odd==1){
        cout<<odd_ind+1<<endl;
    }

    else{
        cout<<ev_ind+1<<endl;
    }




    return 0;
}
