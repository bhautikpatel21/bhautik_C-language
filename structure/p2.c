#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	int m,s,e,t;
	float per;
};
int main()
{
	struct student a[5];
	int i;
	for(i=o;i<2;i++)
	{
		printf("enter roll no:");
		scanf("%d",&a[i].rollno);
		printf("enter name:");
		scanf("%s",&a[i].name);
		printf("enter maths marks:");
		scanf("%d",&a[i].m);
		printf("enter english marks:");
		scanf("%d",&a[i].e);
		printf("enter science marks:");
		scanf("%s",&a[i].s);
	}
	printf("\n\nrollno\tname\tmaths\tsci\teng\ttotal\tper");
	for(i=0;i<2;i++)
	{
		a[i].t=a[i].m+a[i].e+a[i].s;
		a[i].per=(float)a[i].t/3;
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t.2f",a[i].rollno,a[i].name,a[i].m,a[i].e,a[i].s,a[i].t,a[i].per);
	}
}