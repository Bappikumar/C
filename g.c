#include<stdio.h>
#include<conio.h>
int yint(n);
int main()
{
    int x;
    x=y(10);
    printf("final output=%d",x);
    getch();
}
int y(int n)
{
    printf("with %d\n",n);
    if(n==0)
    {
        printf("terminating=%d\n",n);
        return n;
    }
    else{
        printf("re=%d\n",(n-2));
        return n+y(n-2);
    }
    printf("CSE %d times\n",n);
}
