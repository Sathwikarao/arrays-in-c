#include<stdio.h>
int main()
{
	int avg=0,arr[6],i,sum=0;
	printf("enter the marks\n ");
	for(i=0;i<6;i++)
{
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
}
avg=sum;
avg=avg/6;
printf("%d",avg);
}
