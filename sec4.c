#include<stdio.h>
#include<conio.h>
int y(int n);
int main(){
    int x;
    x=y(20);
    printf("final output=%d",x);
    getch();
    }
int y(int n){
    if(n==0)
        {
            printf("In terminating condition=%d\n",n);
            return n;
        }
        else{
            printf("In Recursive Calling=%d\n",n);
            return n+y(n-1);

        }
        printf("CSE %d Times\n",n);
    }
