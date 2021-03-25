#include<stdio.h>
main(){
    int i,j,n,k;
    scanf("%d%d%d",&i,&j,&k);
    if(i>j)
        n=i;
    else
        n=j;
    if(n>k)
     printf("%d",n);
    else
        printf("%d",k);
    return 0;
    }
