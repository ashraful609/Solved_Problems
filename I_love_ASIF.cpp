#include <iostream>
#include <algorithm>
using namespace std;
const int x=1000;
int main(){

    int n;
    cin>>n;
    int a[x];
    cin>>a[0];
    int c=0;

    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>*std::max_element(a,a+i)){
            c++;
        }
        if(a[i]<*std::min_element(a,a+i)){
            c++;
        }


    }

    cout<<c<<endl;




    return 0;
}
