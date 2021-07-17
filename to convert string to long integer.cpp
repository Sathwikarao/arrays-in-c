#include<stdio.h>
int main()
{
	int p,q,r,s;
	printf("enter the value of p (even)=");
	scanf("%d",&p);
	printf("enter q=");
	scanf("%d",&q);
	printf("enter r and s values (positive)=");
	scanf("%d%d",&r,&s);
	if(p%2==0 && r>0 && s>0)
	if(q>p && (r+s)>(p+q))
	printf("given values are correct values");
	else
	printf("given values are wrong values");
}
