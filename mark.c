//bappi
#include<stdio.h>
main(){
    int mark;
    char grade;
    printf("Enter number:");
    scanf("%d",&mark);
    if(mark>=80){
    grade='A+';
    printf("%c",grade);
    }
   else if(mark>=70){
    grade='A';
    printf("%c",grade);
    }
    else if(mark>=60){
    grade='B';
    printf("%c",grade);
    }
   else if(mark>=50){
    grade='C';
    printf("%c",grade);
   }
   else
   printf("fail");

}
