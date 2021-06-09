#include<stdio.h>
#include<conio.h>
 main()
{
  int a[10],i,min,max,n;
  printf("enter the size of the array");
  scanf("%d",&n);
  printf("enter elements into the array");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
    max=a[i];
    if(a[i]<min)
    min=a[i];
  }
  printf("maximum element is %d\n",max);
  printf("minimum element is %d ",min);
  getch();
}
