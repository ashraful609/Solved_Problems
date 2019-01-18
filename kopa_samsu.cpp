#include <iostream>

using namespace std;

int main(){


    int t;
    cin>>t;
    int v=0;
    while(v<t){

        int x1,y1,x2,y2;

        cin>>x1>>y1>>x2>>y2;
        int m;

        cin>>m;
        const int c=m;

        string p[c];

        for(int i=0;i<c;i++){
            int x,y;
            cin>>x>>y;
            if(x>x1 && x<x2 && y>y1 && y<y2){
                p[i]="Yes";
            }
            else
                p[i]="No";

        }
        cout<<"Case "<<v+1<<":"<<endl;
        for(int i=0;i<c;i++){
            cout<<p[i]<<endl;
        }

        v++;
    }

    return 0;

}
