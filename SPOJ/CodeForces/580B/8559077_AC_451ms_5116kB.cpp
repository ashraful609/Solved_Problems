#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


    long long int n,d;
    cin>>n>>d;

    vector <pair <long long int ,long long int> > a;

    for(int long long i=0;i<n;i++){
        long long int m,s;
        cin>>m>>s;

        a.push_back(make_pair(m,s));
    }

    sort(a.begin(),a.end());

    long long int r=0,l=0;
    long long int temp=0;
    long long int max_=0;


    while(r<n){
        if(r==0){
            temp=a[r].second;
            r++;
        }
        else if(a[r].first-a[r-1].first<d){
            if(a[r].first-a[l].first<d){
                temp+=a[r].second;
                r++;
            }else{
                if(temp>max_){
                    max_=temp;
                }
                temp-=a[l].second;
                l++;


            }
        }
        else if(a[r].first-a[r-1].first>=d){
            if(temp>max_){
                max_=temp;
            }
            temp=a[r].second;
            l=r;

            r++;
        }

    }
    if(temp>max_){
        max_=temp;
    }


    cout<<max_<<endl;







    return 0;
}
