#include<stdio.h>
#include<conio.h>
void main()
{
    int n=10,i,num=1,count=0;
    while(num<=n)
    {
        for(i=1;i<=num;i++)
        if(num%i==0)
        {
            count ++;

        }
    }
if(count==2)
{
    printf("%d",num);
}
count=0;
num ++;
return 0;
}
