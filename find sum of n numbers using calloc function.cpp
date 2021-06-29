#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum=0,*ptr,n,i;
	printf("enter the size=");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==0)
	{
		printf("error! memory is not allocated");
		exit (0);
	}
	printf("enter the elements=");
	for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("sum=%d",sum);
	free(ptr);
	return 0;
}
