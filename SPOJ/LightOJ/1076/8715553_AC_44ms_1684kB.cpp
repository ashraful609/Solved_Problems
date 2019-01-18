#include <iostream>
#include <cstdio>


using namespace std;

int main(){



    long t,n,m;

    cin>>t;
    int x=0;
    while(x<t){
        cin>>n>>m;
        long long total=0;
        long long cont[1010];
        for(long long i=0;i<n;i++){

            cin>>cont[i];
            total+=cont[i];
        }

        long long min_val=0;


        long long l=0,r=total,mid;
        while(l<=r){
            mid=(l+r)/2;
            int p=0;
            int j=0,running=0,counter=1;
            while(j<n){
                if(cont[j]>mid){
                    break;
                }
                else if(running+cont[j]<=mid){
                    running=running+cont[j];
                    j++;
                }
                else{
                    if(counter==m){
                        break;
                    }
                    running=0;
                    counter++;

                }

            }

            if(j>=n){
                p=1;
            }

            if(p==1){
                min_val=mid;
                r=mid-1;
            }
            else
                l=mid+1;



        }

        cout<<"Case "<<x+1<<":"<<" "<<min_val<<endl;

        x++;


    }



    return 0;
}
