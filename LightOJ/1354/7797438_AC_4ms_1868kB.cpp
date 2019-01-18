#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int v=0;
    while(v<n){
        string dc,bn;

        cin>>dc>>bn;
        char x[dc.size()],y[bn.size()];

        for(int i=0;i<dc.size();i++){
            x[i]=dc[i];
        }
        for(int i=0;i<bn.size();i++){

            y[i]=bn[i];
        }

        int ip_ser_d[4],ip_ser_b[4];
        for(int i=0;i<4;i++){
            ip_ser_d[i]=ip_ser_b[i]=0;
        }
        int q=0;

        for(int i=0;i<dc.size();i++){
            if(x[i]=='.'){
            q++;
            }
            else{
                ip_ser_d[q]=ip_ser_d[q]*10+(x[i]-48);
            }
        }



        q=0;
        int p=7;

        for(int i=0;i<bn.size();i++){
            if(y[i]=='.'){
                q++;
                p=8;
            }
            else if(y[i]=='1'){
                ip_ser_b[q]=ip_ser_b[q]+pow(2,p);
            }

            p--;
        }

        if(ip_ser_d[0]==ip_ser_b[0] && ip_ser_d[1]==ip_ser_b[1] && ip_ser_d[2]==ip_ser_b[2] && ip_ser_d[3]==ip_ser_b[3]){
            cout<<"Case "<<v+1<<": "<<"Yes"<<endl;
        }
        else
            cout<<"Case "<<v+1<<": "<<"No"<<endl;



        v++;

    }




    return 0;
}
