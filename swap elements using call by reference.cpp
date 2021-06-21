#include<stdio.h>
void swap_val(int,int);
void swap_ref(int*,int*);
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("pass by value\n");
	printf("before swap call=a=%d\tb=%d=%d\n",a,b);
	swap_val(a,b);
	printf("after swap call=a=%d\tb=%d=%d\n",a,b);
	printf("pass by reference\n");
	printf("before swap call=a=%d\tb=%d=%d\n",a,b);
	swap_ref(&a,&b);
	printf("after swap call=a=%d\tb=%d=%d\n",a,b);
}
void swap_val(int p,int q)
{
	int t;
	t=p;
	p=q;
	q=t;
}
void swap_ref(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
