#include<stdio.h>
main(){
    int i,m,n,a,b,c;
    n=1;
    a=1;
    b=0;
    c=0;
    printf("m=");
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        n=n*2;
        a=a*3;
        b=b+n;
        c=c+a;
    }
        n=b+c;
        n=1+n;

     printf("The value of=%d",n);
   }
