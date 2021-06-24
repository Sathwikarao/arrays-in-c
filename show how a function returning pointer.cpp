#include<stdio.h>
int*findlarger(int*,int*);
int main()
{
	int num1=0,num2=0;
	int *result;
	printf("pointer: show a function returning pointer\n");
	printf("-------------------------------------------\n");
	printf("input first number\n");
	scanf("%d",&num1);
	printf("input second number\n");
	scanf("%d",&num2);
	result=findlarger(&num1,&num2);
	printf("number %d is larger",*result);
}
int*findlarger(int*num1,int*num2)
{
	if(*num1>*num2)
	return num1;
	else
	return num2;
}

