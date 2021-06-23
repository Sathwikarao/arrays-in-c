#include<stdio.h>
int main()
{
	char str[100],*st;
	int nv=0,nc=0;
	printf("enter the string\n");
	gets(str);
	st=str;
	while(*st!='\0')
	{
		if(*st=='A'||*st=='E'||*st=='I'||*st=='O'||*st=='U'||*st=='a'||*st=='e'||*st=='i'||*st=='o'||*st=='u')
		nv++;
		else
		nc++;
		st++;
	}
	printf("string=%s\n",str);
	printf("number of vowels=%d\n",nv);
	printf("number of consonants=%d",nc);
}
