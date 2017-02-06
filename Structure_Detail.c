#include<stdio.h>
struct addition
{

	int num1;
	int num2;
};

int main()
{
	int result;
	struct addition add;
	printf("enter a number \n");
	scanf("%d",&add.num1);
	printf("enter another number");
	scanf("%d",&add.num2);
	result=add.num1+add.num2;
	printf("the sum of two number is %d",result);
	return 0;
	}
