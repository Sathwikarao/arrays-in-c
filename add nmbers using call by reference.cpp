#include<stdio.h>
int add(int*,int*);
int main()
{
	int a,b,sum;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	sum=add(&a,&b);
	printf("sum of %d and %d =%d",a,b,sum);
}
int add(int*a,int*b)
{
	return(*a+*b);
}
