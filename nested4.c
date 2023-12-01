#include<stdio.h>

main(){
	float a,b,c,d;
	printf("Enter The Value Of A :");
	scanf("%f",&a);
	printf("Enter The Value Of B :");
	scanf("%f",&b);
	printf("Enter The Value Of C :");
	scanf("%f",&c);
	printf("Enter The Value Of D :");
	scanf("%f",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is max");	
			}
			else
			{
				printf("D is max");	
			}	
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}	
		}	
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is max");	
			}
			else
			{
				printf("D is max");	
			}	
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}	
		}	
	}	
}
