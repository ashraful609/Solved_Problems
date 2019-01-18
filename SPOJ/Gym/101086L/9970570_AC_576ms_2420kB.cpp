#include <iostream>


using namespace std;

int main(){


    int t;
    cin>>t;
    bool arr[32]={false};
    int val[100005];
    arr[2]=arr[3]=arr[5]=arr[7]=arr[11]=arr[13]=arr[17]=arr[19]=arr[23]=arr[29]=arr[31]=true;

    val[0]=0;
    int counterx=0,x;
    for(int i=1;i<=100005;i++){
        counterx=0;
        x=i;
        while(x){
            if(x&1){
                counterx++;
            }

            x=x>>1;
        }
        if(arr[counterx]){
            val[i]=val[i-1]+1;
        }
        else{
            val[i]=val[i-1];
        }
    }


    while(t--){

        int l,r;

        cin>>l>>r;
        if(l==0){
            cout<<val[r]-val[l]<<endl;
        }
        else
            cout<<val[r]-val[l-1]<<endl;
    }






    return 0;

}
