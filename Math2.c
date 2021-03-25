 //25-02-2016
//Bappi Kumar
//Assume that there are 5 equations with ten variables.Now write a program for those 5 equations.
#include<stdio.h>
main(){
    int a,b,c,d,e,f,g,h,i,j,eq1,eq2,eq3,eq4,eq5;
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    eq1=(a+b+c+d+e+f-g-h-i-j);
    printf("a+b+c+d+e+f-g-h-i-j=%d\n",eq1);
    eq2=(a+b+c+d*e*f*g-h-i+j);
    printf("a+b+c+d*e*f*g-h-i+j=%d\n",eq2);
    eq3=((a+b+c)*d*e+f+g+h-i-j);
    printf("(a+b+c)*d*e+f+g+h-i-j=%d\n",eq3);
    eq4=(a+b+c*d*e*f/g+h-i/j);
    printf("a+b+c*d*e*f/g+h-i/j=%d\n",eq4);
    eq5=(a*b*c/d+e-f-g/h+i*j);
    printf("a*b*c/d+e-f-g/h+i*j=%d\n",eq5);

}
