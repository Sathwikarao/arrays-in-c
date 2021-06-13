#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("enter str1=");
	gets(str1);
	strcpy(str2,str1);
	printf("copy str1 in str2=");
	puts(str2);
}
