#include<stdio.h>

int main()
{
    int n=5;
    int i=1,k;
    for( ; ; )
    {
        k=n*i;
        printf("%d * %d = %d\n",n,i,k);
        i++;
        if(i>10)
            break;
    }
    return 0;
}
