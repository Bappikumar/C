#include<stdio.h>
main(){
    int s;
    printf("enter the num of  ");
    scanf("%d",&s);
    if(s>=80)
        printf("A+");
        else if(70<=s && s<80)
            printf("A");
        else if(55<=s && s<70)
            printf("B");
        else if(45<=s && s<55)
            printf("C");
        else
            printf("F");
    }
