#include<stdio.h>

main()
{
	char ch;
	printf("Enter The Value =");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
	{
		printf("This is alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("This is digit");
	}
	else{
		printf("This is special character");
	}
	
}
