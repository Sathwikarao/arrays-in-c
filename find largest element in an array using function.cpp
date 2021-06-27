#include<stdio.h>
#define max20
void read_arr(int[],int);
int large_arr(int[],int);
void disp_arr(int[],int);
int main()
{
	int n,a[100];
	printf("enter the size=");
	scanf("%d",&n);
	printf("enter the values into array=");
	read_arr(a,n);
	printf("array elements are=");
	disp_arr(a,n);
	printf("\n%d is largest element of array\n",large_arr(a,n));
}
void read_arr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int large_arr(int a[],int n)
{
	int big,i;
	big=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>big)
		big=a[i];
	}
	return big;
	}
	void disp_arr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
