#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,big;
	printf("enter the size\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",(a+i));
	printf("array elements=\n");
	for(i=0;i<n;i++)
	printf("%d\t",*(a+i));
	big=*(a+0);
	for(i=0;i<n;i++)
	{
		if(*(a+i)>big)
		big=*(a+i);
	}
	printf("\n %d is largest element of the array",big);
}
