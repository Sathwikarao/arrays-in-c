#include<stdio.h>
#include<stdlib.h>
struct course
{
	int marks;
	char subject[30];
};
int main()
{
	struct course*ptr;
	int n;
	printf("enter no of records=");
	scanf("%d",&n);
	ptr=(struct course*)malloc(n*sizeof(struct course*));
	for(int i=0;i<n;++i)
	{
		printf("enter the subject and marks=");
		scanf("%s%d",&(ptr+i)->subject,&(ptr+i)->marks);
	}
	printf("Display information\n");
	for(int i=0;i<n;++i)
{
	printf("%s\t%d\n",(ptr+i)->subject,(ptr+i)->marks);
}
free(ptr);
return 0;
}
