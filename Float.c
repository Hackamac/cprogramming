#include<stdio.h>
struct multiplication
{

	float a,b,c;
};
void multiply(float x,float y,float z);
int main()
{
	
	struct multiplication mul;
	printf("enter a number \n");
	scanf("%f",&mul.a);
	printf("enter another number \n");
	scanf("%f",&mul.b);
	printf("enter another number \n");
	scanf("%f",&mul.c);
	multiply(mul.a,mul.b,mul.c);

	
	return 0;
	}
	
	void multiply(float x ,float y,float z)
	{
	float result;
	result=x*y*z;
	printf("The multiplication is %f",result);
	}
