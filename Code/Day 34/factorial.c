int main(void) {
	// your code goes here
	int i,n=5,fact=1;
	printf("Enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	fact=fact*i;
	 printf("Factorial of %d = %d\n", n, fact);
}	
	return 0;
}