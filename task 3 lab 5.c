//Input the employee's years of service and performance rating (1–5). Use nested if-else to determine the bonus percentage
//and display the bonus amount and final salary.
#include<stdio.h>
main()
{
   float s,fs;
   int pr,y;
   printf("enter your years of service : ");
   scanf("%d",&y);
   	printf("enter your performance rating (1–5) : ");
   scanf("%d",&pr);
   printf("enter your salary : ");
   scanf("%f",&s);
   	if(y<=10)
   	{  if((pr==1) || (pr==2) || (pr==3))
   	 {
		  printf("your final salary is : %.2f",s);  }
   	 else if((pr==4) || (pr==5))
   	 {  fs=s*1.10;
   	  printf("your final salary is : %.2f",fs);
		}
		else
		 printf("invalid input");
	   }
	   else if(y>10)
	   	{  if((pr==1) || (pr==2) || (pr==3))
   	  {
		 printf("your final salary is : %.2f",s);  }
   	 else if((pr==4) || (pr==5))
   	 {  fs=s*1.20;
   	  printf("your final salary is : %.2f",fs);
		}
		else printf("invalid input");
	   }
	   else 
	   printf("invalid input");
	   
}
