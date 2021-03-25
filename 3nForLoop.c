#include<stdio.h>

int main()
{
    int n=5;
    int i,k;
    for(i=0;i<=20;i++)
    {
        k=n*i;
        printf("%d * %d = %d\n",n,i,k);
    }
    return 0;
}
