#include<stdio.h>
main(){
int i,j,n,k;
    printf("enter the number of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<n-i;j++)
        printf("y\n",j);


        for(k=1;k<i;k++){

                printf("*",k);

                }
        }
    }
