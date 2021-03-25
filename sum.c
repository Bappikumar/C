#include<stdio.h>

int main()
{
    int n=5;
    int m,i;
    m=0;
    for(i=0;i<=20;i++)
    {
        m=m+n;
        printf("%d + %d = %d\n",n,i,m);
    }
    return 0;
}
