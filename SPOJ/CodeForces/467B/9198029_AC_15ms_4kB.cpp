#include <iostream>

using namespace std;


int main(){


    long long n,m,k;

    cin>>n>>m>>k;

    long long a[1010];


    for(long long i=0;i<m;i++){
        cin>>a[i];
    }
    long long fedor;
    cin>>fedor;

    long long fbits[25];

    for(long long i=0;i<n;i++){
        if(fedor & (1<<i)){
            fbits[i]=1;
        }
        else fbits[i]=0;
    }

    long long counter1=0,counter2=0;

    for(long long i=0;i<m;i++){
        counter1=0;
        for(long long j=0;j<n;j++){
            if(fbits[j]==1 && (a[i] & 1<<j)==0){
                counter1++;
            }
            else if(fbits[j]==0 && ((a[i] & 1<<j)!=0)){
                counter1++;
            }
        }
        if(counter1<=k){
            counter2++;
        }
    }

    cout<<counter2<<endl;









    return 0;
}
