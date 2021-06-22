#include<stdio.h>
int prime(int);
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(prime(n))
	printf("%d is prime\n",n);
	else
	printf("%d is not prime\n",n);
}
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
{
	if(n%i==0)
	break;
}
if(i==n)
return 1;
else
return 0;
}
