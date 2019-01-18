#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
#include <stdio.h>


using namespace std;

int main(){


    char c;
    char s[210];

    int i=0;

    map<string,int> dict;
    while(c=getchar()){
        if(c==EOF){
            break;
        }
        if(c>='A' && c<='Z'){
            c=tolower(c);
        }
        if(c>='a' && c<='z'){
            s[i]=c;
            i++;
        }
        else{
            s[i]='\0';
            i++;
            if(i>1){
                dict[s]=1;
            }
            i=0;

        }
    }

    map<string,int>::iterator it;

    for(it=dict.begin();it!=dict.end();it++){
        puts(it->first.c_str());
    }

    return 0;

}

