#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        vector<long long> inp1;
        string fau;
        char s[999999];

        int inp;
        char c;
        while(scanf("%d%c",&inp,&c)){
            inp1.push_back(inp);
            if(c=='\n')break;
        }
        int q=inp1.size();
        string inp2[q];

        for(long i=0;i<q;i++){
            cin>>inp2[i];
        }

        pair<int,string> res[q];


        for(long i=0;i<q;i++){
            res[i].first=inp1[i];
            res[i].second=inp2[i];
        }


        sort(res,res+q);



        for(long i=0;i<q;i++){
            cout<<res[i].second<<endl;
        }

        if(t)cout<<endl;



    }


    return 0;
}
