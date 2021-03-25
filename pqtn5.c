#include<stdio.h>
main(){
    int i,m=0;
    printf("m1:%d\n",m);
    for(i=0;i<=3;i=i+1){
        printf("m2:%d\n",m);
        m=m+1;
        printf("m3:%d\n",m);
    }
    printf("m4:%d\n",m);
    if(m>4){
        printf("I UNDERSTOOD C PROGRAMMING.\n");
    }else{
        printf("i love c.\n");
        }
        return 0;
    }
