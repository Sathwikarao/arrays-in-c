#include<stdio.h>
#define MAX 5
int main()
{
int a[MAX][MAX],b[MAX][MAX],n,m,i,j;
printf("enter the size");
scanf("%d%d",&n,&m);
printf("enter the elements");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d",a[i][j]);	
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
	b[j][i]=a[i][j];
}
printf("matrix elements\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf(" resultant matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d\t",b[i][j]);
printf("\n");
}

}

