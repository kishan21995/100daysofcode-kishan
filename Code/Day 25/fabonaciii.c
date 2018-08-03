#include<stdio.h>
#include<conio.h>
 void main()
{
    int n=15,i,a=0,b=1;
    int c=a+b;
    while(c<=n)
{
    printf("%d",c);
    c=a+b;
    a=b;
    b=c;
}
return 0;
}