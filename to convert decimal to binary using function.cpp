#include<stdio.h>
#include<math.h>
long long convert(int n);
int main()
{
	int n;
	printf("enter the decimal number\n");
	scanf("%d",&n);
	printf("%d in decimal is %d in binary\n",n,convert(n));
	return 0;
}
long long convert(int n)
{
	long long bin=0;
	int rem,i=1,step=1;
	while(n!=0)
	{
		rem=n%2;
	printf("step=%d:%d/2,remainder=%d,quotient=%d\n",step++,n,rem,n/2);
	n=n/2;
	bin+=rem*i;
	i*=10;
}
return bin;
}
