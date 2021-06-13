#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the string= ");
	gets(str);
	strrev(str);
	printf("reverse of str= ");
	puts(str);
	return 0;
}
