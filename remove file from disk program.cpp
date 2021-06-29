#include<stdio.h>
int main()
{
	int status;
	char fname[100];
	printf("remove a file from disk\n");
	printf("________________________\n");
	printf("enter the file name to delete=");
	scanf("%s",&fname);
	status=remove(fname);
	if(status==0)
	{
		printf("file is deleted successfully!");
	}
	else
	{
		printf("unable to delete the file");
	}
}
