//Multipication of 1.....20 to each others.

#include<stdio.h>

int main()
{
    int i,n;

    for(i=0;i<=20;i++){
            //printf("The value of i is: %d\n",i);

        for(n=0;n<=10;n++)
        {
            //printf("The value n is: %d\n",n);
            printf("%d X %d = %d\n",n,i,n*i);
        }
        printf("               \n           \n");
   // printf("Value is i & n : %d + %d\n",i,n);
    }
    //printf("Value is i & n : %d + %d\n",i,n);
    return 0;
}
