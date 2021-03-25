//1+2+3+4+5+........+n
#include<stdio.h>
main(){
    int i,n,sum;
    printf("enter the value of n= ");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
        sum=i+sum;

    printf("%d",sum);

}



