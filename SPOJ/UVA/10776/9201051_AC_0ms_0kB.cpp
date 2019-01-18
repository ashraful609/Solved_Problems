#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>


using namespace std;


bool t[40] ;

vector<char>res ;

string s ;

int r ,len;

void func(int x){


  if((int)res.size()==r ){
      int j ;
   for(j=0;j<r;j++)  cout<<res[j] ;
            cout<<endl ;
  return ;
 }

  for(int i=x;i<len;i++){
   if(t[i]==false) {

     t[i] = true ;

     res.push_back(s[i]) ;
    func(i+1) ;
    t[i] = false ;
    res.pop_back() ;
   }
   while(s[i]==s[i+1]) i++ ;

  }


}


int main() {
    while(cin>>s>>r){
     memset(t,false,sizeof(t)) ;
     len = s.length() ;
     sort(s.begin(),s.end()) ;
     func(0) ;
    }


  return 0;
}
