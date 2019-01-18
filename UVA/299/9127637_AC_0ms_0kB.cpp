#include <iostream>

using namespace std;


int main(){


    int n;
    cin>>n;


    while(n--){
        int l;
        cin>>l;
        const int x=l;
        int a[x];

        for(int i=0;i<l;i++){

            cin>>a[i];

        }

        int i,j;

        int counter=0;
        int q=l-1;

        for(i=0;i<q;i++){
            for(j=0;j<q-i;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    counter++;
                }
            }
        }

        cout<<"Optimal train swapping takes "<<counter<<" swaps."<<endl;


    }







    return 0;

}
