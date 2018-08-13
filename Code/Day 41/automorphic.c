#include<stdio.h>  
2:  int main()  
3:  {  
4:    long int n,num,sqr,rem=0;  
5:    int temp,ans;  
6:    printf("Enter a number: ");  
7:    scanf("%ld",&n);  
8:    num=n;  
9:    sqr=n*n;  
10:    temp=10;  
11:    printf("square of %ld is %ld ",n,sqr);  
12:    while(n>0)  
13:    {  
14:       rem=sqr%temp;  
15:       if(num==rem)  
16:       {  
17:           ans=1;  
18:           break;  
19:       }  
20:       n=n/10;  
21:       temp=temp*10;  
22:    }  
23:    if(ans==1)  
24:    {  
25:       printf("\n %d is automorphic",num);  
26:    }  
27:    else  
28:    {  
29:       printf("\n %d is not automorphic",num);  
30:    }  
31:   return 0;  
32:  } 