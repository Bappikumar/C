#include<stdio.h>

int main()
{
    int n=0,i=1;

    while(i<=10)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
        continue;
        //n++;
    }
    n++;
    //i++;
    printf("%d * %d = %d\n",n,i,n*i);
    return 0;
}
