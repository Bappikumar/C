//base of given number.
#include<stdio.h>
main(){
    int i,n,k=1;
    printf("enter the number of i,n= ");
    scanf("%d%d",&i,&n);
    for(; ;)
        if(i%10>=n)
        k=0;
        break;
        i=i%10;
        if(i=0)
        break;

    }


