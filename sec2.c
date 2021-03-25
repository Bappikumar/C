#include<stdio.h>
#include<conio.h>
int x[11]={1,9,1,8,1,7,1,6,1,5,1};
int i,j,k,tmp,big,p,s,p,f;
main(){
   s=0;f=10;
   for(i=s;i<=f;i++)
    {
        big=x[i];
        for(j=i;j<=f;j++)
        {
            if(x[j]>big)
            {
                big=x[i];
                p=j;
            }
        }
        tmp=x[p];
        x[p]=x[i];
        x[i]=tmp;
    }
    for(k=0;k<=9;k++)
        printf("%d -th %d\n",k,x[k]);
   }
