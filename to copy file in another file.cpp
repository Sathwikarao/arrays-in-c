#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr1,*fptr2;
	char ch,fname1[30],fname2[30];
	printf("to copy file in another name\n");
	printf("input the source file name=");
	scanf("%s",&fname1);
	fptr1=fopen(fname1, "r");
	if(fptr1==NULL)
	{
		printf("file is not found or error in opening file\n");
		exit(1);
	}
	printf("input the new file name=");
	scanf("%s",&fname2);
	fptr2=fopen(fname2,"0");
	if(fptr2==NULL)
	{
		printf("file is not found or error in opening file\n");
		fclose(fptr1);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fptr1);
		if(ch==NULL)
		{
		break;
	}
	else
	{
		fputc(ch,fptr2);
	}
	printf("file %s is copied successfully in file %s\n",fname1,fname2);
	fclose(fptr1);
	fclose(fptr2);
	getchar();
}
}
