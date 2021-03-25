#include<stdio.h>
#include<string.h>
struct Biodata{
                int age;
                int num;
                char name[30];
                char sub[30];
                float height;
                };
        int main(float height,int age,int num){
           struct Biodata bdt1;
            strcpy(bdt1.name,"Bappi kumar");
            strcpy(bdt1.sub,"CSE");
            printf("student name:%s\n",bdt1.name);
            printf("student sub:%s\n",bdt1.sub);
            printf("The height is: ");
            scanf("%f",&height);
            if(height<7){
                    printf("The num will be: ");
                    scanf("%d",&num);
                    switch(num){
                        case 5:
                            printf("The number of weight may be:56\n");
                        case 4:
                            printf("The number of weight may be:45\n");
                        break;
                        case 3:
                            printf("The number of weight may be:35\n");
                        case 2:
                            printf("The number of weight may be:34\n");
                        case 1:
                            printf("The number of weight may be:30\n");
                        case 0:
                            printf("The number of weight may be:20\n");
                        }
                    }
            else{
                    int age[5]={17,24,27,23,12};
                    int *p,sum,i,icm;
                    p=age;
                    printf("       Name & Details           age    income\n\n");
                    for(i=0;i<=4;i++){
                            sum=10;
                            icm=*p+sum;
                            printf("Bappi's age& income[%d] %d     %d\n",i,*p,icm);
                            p++;
                                    }
                }
}

