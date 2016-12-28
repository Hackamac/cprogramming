/*
Student Name:Ragav Upreti
Subject:Programming Fundamental
Program:WAP to check odd or even
Lab Sheet:13
Roll No.:25 
Date: Dec 28
*/

#include<stdio.h>
#include<stdlib.h>
	

main ()
{
   	int a,i,x,n,ASCII,flag=0;

 	char c;


    printf(" ***Various Calculator*** \n");
    printf("1.>>>>Odd or even \n");
    printf("2.>>>>Prime or not \n");
    printf("3.>>>>Vowel or consonent \n");
    printf("4.>>>>Alphabet or not  \n");
    printf("5.>>>>divisible by 11 and 5  \n");
    printf("Enter a character \n");
    scanf("%c",&c);
    printf("Choose the Corresponding number of operation you want to perform  \n");
    scanf("%d",&a);
     

    switch(a)
   {

        case 1:
                printf("enter a number \n");
                scanf("%d",&x);
                if (x%2==0)
                printf("the number is even \n");
                else
                printf("the  number is odd");
                break;
        case 2:
                printf("Enter a positive integer: ");
    		scanf("%d",&n);

    		for(i=2; i<=n/2; ++i)
   		{
        
       		if(n%i==0)
        	{
            	flag=1;
            break;
        	}
   		 }

    		if (flag==0)
        	printf("%d is a prime number.",n);
   		 else
        	printf("%d is not a prime number.",n);
		break;

        case 3:


                if (c=='e'||c=='a'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                {
                printf(" %c is a vowel: \n",c);
                }
                else
                {
                printf("%c is a consonant \n",c);
                }

                break;
        case 4:




                ASCII=c;
                if((ASCII>=65 && ASCII<=90)||(ASCII>=97 && ASCII<=122))
                printf(" %c is alphabet \n",c);
                else
                printf("Not Alphabet \n");
                break;
        case 5:
                exit(0);
                break;
        default:
                printf("Thank you for visiting:");

    }









        return 0;
   }
	
	
	
