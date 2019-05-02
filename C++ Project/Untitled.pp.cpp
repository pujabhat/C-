#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,sum=0,avg;
	for(i=0;i<=10;i++)
	{
		printf("%d no",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=10;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<=10;i++)
	{
		avg=sum/a[i];
	}
	printf("sum=%d\n average=%d",sum,avg);
	getch();
}
