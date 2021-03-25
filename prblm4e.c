#include<stdio.h>
#include<math.h>
main(){
    int i,j,fact=1;
    printf("enter the num of i: ");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
        fact=fact*j;
        printf("factorial of j:%d",fact);
    }
