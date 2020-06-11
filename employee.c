#include <stdio.h>
#include<string.h>
struct employee
{
	int empno,salary,depno;
	char empname[30];
}e[20];
int get(struct employee e[])
{
	for(int i=0;i<20;i++)
	{
		printf("empno: ");
		scanf("%d",&e[i].empno);
		printf("empname: ");
		scanf("%s",&e[i].empname);
		printf("depno: ");
		scanf("%d",&e[i].depno);
		printf("salary: ");
		scanf("%d",&e[i].salary);
	}
}
int show(struct employee e[])
{
	printf("\nempno\tname\tsalary\tdepno\n");
	for(int i=0;i<20;i++)
	{
		printf("%d\t%s\t%d\t%d\n",e[i].empno,e[i].empname,e[i].salary,e[i].depno);
	}
}
int main()
{
	int i;
	struct employee e[20];
	get(&e[i]);	
	show(e);
}
