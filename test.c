#include<stdio.h>
main(){
    int a,n,i,sum;
    printf("enter the number of a= ");
    scanf("%d",&a);
    for(i=0;i<6;i++)
        sum=a++;
    printf("%d",sum);
    return 0;


}
