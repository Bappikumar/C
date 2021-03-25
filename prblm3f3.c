//base-5 number

#include<stdio.h>
main(){
    int i,j=1,n;
    printf("enter the value of i= ");
    scanf("%d",&i);
    for(; ;){
        if(i%10>=5)
            j=0;
            break;
            i=i%10;
            if(i=0)
                break;
    }
    if(j)
        printf("it is a binary");
        else
            printf("it is not a binary");
        }

