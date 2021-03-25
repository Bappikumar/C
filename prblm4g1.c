#include<stdio.h>
main(){
    int i,j,n;
    printf("enter the num of n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++)
            printf("*",j);
            printf(" \n");
            }
}
