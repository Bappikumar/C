#include<stdio.h>
main(){
    int i,j,n,k,l,m;
    printf("Enter the num of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf("@");
    for(k=1;k<=2*i-1;k++)
        printf("*");
        printf(" \n");
        }
    for(l=6;l<=i-1;i++){
        printf("@");
        for(m=6;m<=n;m++)
            printf("*");
            printf(" \n");
    }
        return 0;
    }
