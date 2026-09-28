//nput a meal category (1 = Breakfast, 2 = Lunch, 3 = Dinner) and an item choice. Use nested switch statements to select the
//item and display the selected item category, item number, and price.
#include<stdio.h>
main()
{
	int bt,it,p,tp;
	printf("enter your meal category (1 = Breakfast, 2 = Lunch, 3 = Dinner : ");
	scanf("%d",&bt);
	switch(bt)
	{
		case 1:
		printf("enter the item u want to eat \n");
		printf("items:\n 1=chiken karhai \n2=mutton karhai \n3=madhi \n ");
		scanf("%d",&it);
		switch(it)
		{
		     case 1:
		       p=2200;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   
			   case 2:
		       p=3500;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   
			   case 3:
		       p=3200;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   default:      
			   printf("invalid input");
		}
		break;
		
		case 2:
		printf("enter the item u want to eat \n");
		printf("items:\n 1=beef steak \n 2=chicken biryani \n 3=beef pulao \n ");
		scanf("%d",&it);
		switch(it)
		{
		     case 1:
		       p=2800;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   
			   case 2:
		       p=450;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   
			   case 3:
		       p=600;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   default:      
			   printf("invalid input");
		}
		break;
		
			case 3:
		printf("enter the item u want to eat \n");
		printf("items \n 1=tea with paratha \n 2=cheese paratha \n 3=kaba paratha :\n ");
		scanf("%d",&it);
		switch(it)
		{
		     case 1:
		       p=210;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   
			   case 2:
		       p=250;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   
			   case 3:
		       p=150;
			   printf("YOUR ITEM CATEGORY IS %d . \n  PRICE IS %d .\n MEAL CATEGORY IS %d ",it,p,bt);
			   break;
			   default:      
			   printf("invalid input");
		}
		break;
		
		
		default:
			printf("input is invalid");
		
		
	}
}
