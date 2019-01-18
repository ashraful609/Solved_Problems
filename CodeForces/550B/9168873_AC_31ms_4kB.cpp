#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main(){


    long long n,l,r,x;

    cin>>n>>l>>r>>x;

    long long a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    vector<long long> temp;

    long long counter=0;
    long long counter1=0;

    for(int i=0;i<1<<n;i++){
        counter=0;
        temp.clear();
        for(int k=0;k<n;k++){
            if(i&(1<<k)){
                counter+=a[k];
                temp.push_back(k);
            }
        }
        if(counter>=l && counter<=r){
            if(a[temp.back()]-a[temp[0]]>=x){
                counter1++;
            }
        }
    }

    cout<<counter1<<endl;




}
