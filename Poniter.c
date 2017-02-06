// pointer is a variable that stores memory address of another variable

#include<stdio.h>
int main ()
{
int x=5,*p;
p=&x;

printf("the memory address of x variable is %d",*p);

return 0;
}
