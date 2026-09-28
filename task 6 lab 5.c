//Input the player's score and completed missions. A player qualifies for Level 2 with at least 500 points and 5 missions, while
//Level 3 requires 1000 points and 10 missions; otherwise remain at Level 1 and display the player's level.
#include<stdio.h>
main()
{
	int ps,cm;
    printf("enter your points : ");
	scanf("%d",&ps);
	 printf("enter your number of missions completed : ");
	scanf("%d",&cm);
	if((ps>=500 && ps<1000) && (cm>=5))
	printf("you are a level 2 player");
	else if((ps>1000) && (cm>=10))
	printf("you are a level 3 player");
	else 
	printf("you are a level 1 player");
}
