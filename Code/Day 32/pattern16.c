#include <stdio.h>
 
int main(void) {
	// your code goes here
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
	{
		printf("*");
	}
	printf(" \n");	
	}
	return 0;
}
 