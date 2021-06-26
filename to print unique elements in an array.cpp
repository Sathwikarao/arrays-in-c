#include <stdio.h>
int main()
{
    int a[100], n,ctr=0;
    int i, j, k;
       
       printf("Input the number of elements = ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element-%d : ",i);
	      scanf("%d",&a[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(a[i]==a[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",a[i]);
        }
    }
       printf("\n\n");
}

