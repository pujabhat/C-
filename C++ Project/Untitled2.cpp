#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,n,a;
	printf("enter how many no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(i,3);
		printf("%d\t",a);
	}
	getch();
}
