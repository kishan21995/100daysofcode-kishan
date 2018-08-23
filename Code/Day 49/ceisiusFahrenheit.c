//convert celsius to Fahrenheit
#include<stdio.h>
int main()
{
    float c,f;
    clrscr();
    printf("enter temperature in centigrade");
    scanf("%d",&c);
    f=(1.8*c)+32;
    printf("Temperature in fahrenheit=%f",f);
    return 0;
}