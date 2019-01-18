#include <iostream>

using namespace std;

int main(){


    int t;
    cin>>t;
    int n;

    while(t--){

        cin>>n;
        char arr[3][n*3];
        for(int i=0;i<3;i++){
            for(int j=0;j<n*3;j++){
                cin>>arr[i][j];
            }

        }

        int counter=0,counterx=0,people=0;


        for(int i=0;i<n*3;i++){
            for(int j=0;j<3;j++){
                if(arr[j][i]=='*'){
                    counterx++;
                }
            }
            counter++;
            if(counter==3){
                if(counterx>people){
                    people=counterx;
                }
                counter=0;
                counterx=0;

            }
        }

        cout<<(long long)people*4<<endl;



    }





    return 0;

}
