#include <iostream>

using namespace std;

int main(){

    int y;
    cin>>y;

    int x=0;
    int q;
    for(q=y+1;q<=2016;q++){

        int a[4],b[3];
        while(y!=0){
            a[x]=y%10;
            y=y/10;
            x++;
        }
        int i;
        for(i=0;i<4;i++){
            if(i==0){
                b[i]=a[i];
            }
            else{
                int j;
                for(j=0;j<i;j++){
                    if(b[j]==a[i]){
                        break;
                    }
                    else
                        b[j]=a[i];
                }
                if(j!=i){
                    break;
                }

            }
        }
        if(i==4){
            break;
        }
    }
    cout<<q<<endl;



    return 0;
}
