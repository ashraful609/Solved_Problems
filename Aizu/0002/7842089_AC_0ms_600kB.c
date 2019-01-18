#include <stdio.h>

int main(){


    int a,b,c,d,counter;

    while(1==scanf("%d",&a) && 1==scanf("%d",&b)){
        c=a+b;

        d=c;
        counter=0;

        while(d!=0){
            d=d/10;
            counter++;
        }
        printf("%d\n",counter);

    }




    return 0;
}
