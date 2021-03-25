#include<stdio.h>
void main(){
    char s[22];
    int i,count=0;
    scanf("%[^\n]c",s);
    for(i=0;i<=8;i++){
        if(s[i]=='a')
            if(s[i+1]=='b')
            if(s[i+2]=='c')
            count++;
    }
        printf("%d\n",count);
}
