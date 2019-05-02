#include<stdio.h>
#include<conio.h>
int main()
{
	int a,rev=0,n,r;
	printf("enter any digit no");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		r=n/10;
		rev=r+rev*10;
		n=n/10;
	}
	if(a==rev)
	printf("%d iss palindrome",a);
	else
	printf("%d is not plindrome",a);
	getch();
}
