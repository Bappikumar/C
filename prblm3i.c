#include<stdio.h>
main(){
    int m,h,i,j;
    printf("enter the num of m,h \n");
    scanf("%d%d",&m,&h);
    h=2*m;
    i=h*0.05;
    int sum,test;
    printf("test ");
    scanf("%d",&test);
    if(test==1)
        j=5000;
        else if(test==2)
            j=2500;
        else if(test==3)
            j=500;

    sum=j+m+h+i;
    printf("%d",sum);
}
