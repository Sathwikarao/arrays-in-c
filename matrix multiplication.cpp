#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("enter matrix 1 elements=\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("enter matrix 2 elements=\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	c[i][j]=0;
	for(k=0;k<3;k++)
	c[i][j]+=a[i][k]*b[k][j];	
	}
	printf("\nmatrix 1\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	printf("%d\t",a[i][j]);
	printf("\n");
	}
	printf("\nmatrix 2\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	printf("%d\t",b[i][j]);
	printf("\n");
	}
	printf("resultant matrix\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	printf("%d\t",c[i][j]);
	printf("\n");
	}

}
