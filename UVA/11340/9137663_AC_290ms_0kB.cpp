#include <iostream>
#include <map>
#include <string>
#include <cstdio>


using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){
        map<char,double> paidchar;
        int k;
        char x;
        int y;
        cin>>k;
        paidchar.clear();


        for(int i=0;i<k;i++){
            cin>>x>>y;
            paidchar[x]=y;
        }



        long long m;
        cin>>m;
        char s;
        double ans=0;
        map <char,double> ::iterator it;

        for(long long i=0;i<=m;i++){
            while(scanf("%c",&s)){
                if(s=='\n'){
                    break;
                }

                it=paidchar.find(s);
                if(it!=paidchar.end()){
                    ans+=it->second;
                }
            }
        }



        printf("%.2lf$\n",ans/100.0);
        paidchar.clear();

    }

    return 0;
}
