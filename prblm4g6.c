#include<stdio.h>
main(){
    int i,j,n,k;
    printf("enter the num of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");

        for(k=1;k<=2*i-1;k++)
        printf("%d",i);
        printf(" \n");
    }
    return 0;
}

