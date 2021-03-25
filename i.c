#include<stdio.h>
#include<conio.h>
int i,j;
main()
{
    i=1;
    while(i<=5){
        for(j=1;j<=6;j++){
            if(i==j)
                printf("x");
            else
                printf("y");
        }
        i=i+1;
        printf("\n");
    }
}
