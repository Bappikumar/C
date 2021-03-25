#include<stdio.h>
int main()
{
    int k;
    printf("enter the value of k: ");
    scanf("%d",&k);

    while(k<=10){
        k=k+1;
            if (k%2==0)
            {
                printf("k value is: %d\n",k);
                continue;
            }
    printf("print the value: %d\n",k);

   // k++;
    }
    //k++;
    //printf("Print: %d",r);
}
