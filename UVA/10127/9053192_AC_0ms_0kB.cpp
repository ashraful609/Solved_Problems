#include <iostream>

using namespace std;

int main(){



    int n;

    while(cin>>n){

        int temp=1;
        int counter=1;


        while(temp!=0){
            counter++;
            temp=((temp*10)+1)%n;
        }
        cout<<counter<<endl;
    }

    return 0;
}
