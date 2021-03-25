#include<stdio.h>
#include<conio.h>
void func1(int a,int *p,int q[]);
int x,y;
main()
{
    int a,b,c[3];
    a=10;b=20;c[1]=1;c[2]=2;
    x=100;y=200;
    func1(a,&b,c);

    printf("a=%d  b=%d  c[1]=%d  c[2]=%d  x=%d  y=%d",a,b,c[1],c[2],x,y);
    getch();
}
void func1(int a,int *p,int q[])n
{
    int x;
    a=100;
    *p=200;
    q[1]=q[1]+2;
    q[2]=q[2]+2;
    x=102;
    y=202;
}
