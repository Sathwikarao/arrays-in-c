#include<stdio.h>
int add(int*,int*);
int swap_val(int,int);
int swap_ref(int*,int*);
int main()
{
	int a,b,*p,*q,s;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	s=*p+*q;
	printf("sum of %d and %d =%d",*p,*q,s);
	
}
