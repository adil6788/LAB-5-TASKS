//Input the temperature and rain status (1 = Raining, 0 = Not Raining). If temperature is below 15°C recommend Jacket, 15–
//25°C recommend Light Clothing, and above 25°C recommend Summer Clothing; if raining, additionally display Carry an
//Umbrella.
#include<stdio.h>
main()
{
	int t,rs;
	printf("enter the rain status(1 = Raining, 0 = Not Raining) : ");
	scanf("%d",&rs);
	printf("enter the temperature  : ");
	scanf("%d",&t);
	if(rs==1)
	printf("carry in umbrella ");
	else if(t<15)
	printf(" wear jacket ");
	else if(t>=15 && t<=25)
	printf(" wear light clothing ");
	else if(t>25)
	printf(" summer clothing ");
}
