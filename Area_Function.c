/*
 student name:Ragav Upreti
 lab sheet :20
 program:WAP to find area of circle using function
 date:25 jan
 Roll No:25
 */
 #include<stdio.h>
 #define pi 3.14
 void area(float a);
 int main()
 
 {
 float a;
 printf("Enter the radius of circle \n");
 scanf("%f",&a);
 
 area(a);
 

 
 
 return 0;
 

  }
  
  void area (float a)
  {
	   float ar;
	 ar=pi*a*a;
	  printf("The area of circle is %f",ar);
	  
  }
  
	 
  
