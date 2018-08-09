#include<stdio.h>
int main()
{
    int i,n;
    int count=0;
    printf("enter num");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;

        }
    }
    if(count==2)
    {
        printf("%d is a prime num",n);

    }
    else
    {
     printf("%d is not prime",n);

    }
    return 0;
}