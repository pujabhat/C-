#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a=1;
	printf("enter how many no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		a=a+3;
	}
	getch();
}
