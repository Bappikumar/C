#include<stdio.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=(2*n-1);j++) {
            if((i+j)==(n+1)) {
                printf("*");
                k=i;
            }
            else {
                if(j!=n+1)
                printf(" ");
            }
            if(j==k+n-1 && i>=2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
