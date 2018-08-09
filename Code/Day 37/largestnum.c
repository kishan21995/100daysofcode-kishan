#include<stdio.h>
int main()
{
int max_num(int a[],int n)
int max,i,n;
int a[50];
clrscr();
printf("enter num");
sacnf("%d",n);
printf("enter num");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=max_num(a,n);
printf("the largest num is %d",max);
    return 0;
}
int max_num(int a[],int n)
{
    int i,m=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        m=a[i];
        return m;
    }
}