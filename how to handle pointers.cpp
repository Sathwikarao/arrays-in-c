#include<stdio.h>
int main()
{
	char a[5],i,*p;
	printf("enter elements into array=");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	p=a;
	printf("elements are=\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*p);
		p++;
	}
	printf("elements in reverse are =\n");
	for(i=0;i<5;i++)
	{
		p--;
		printf("%d\t",*p);
		
	}
	
}
