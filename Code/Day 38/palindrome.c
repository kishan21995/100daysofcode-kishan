#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],b[100];
printf("enterstring to check palindrome or not ");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("enter string is palindrome  ");
else
printf("enter string is not palindrome");
    return 0;
}