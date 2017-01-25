/*
 student name:Ragav Upreti
 lab sheet :20
 program:WAP to find area of circle using function
 date:25 jan
 Roll No:25
 */
 #include<stdio.h>

 int check();
 int main()
 
 { int res;
 res=check();
 
 printf("the minimum number is %d",res);
 

 
 
 return 0;
 

  }
  
  int check ()
  {
	 int a,b;
	 printf("Enter a number \n");
	 scanf("%d",&a);
	 
	 printf("Enter another number \n");
	 scanf("%d",&b);
	 
	 if (a<b)
	 return a;
	 
	 else 
	 
	  
	  return b;
  }
  
	 
  
