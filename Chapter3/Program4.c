#include<stdio.h>
int main()
{
	char inputChar='a';
	printf("Enter A charachter: ");
	scanf("%c",&inputChar);
	if(inputChar>=65 && inputChar<=90)
	{
		printf("%3c is a Capital letter\n",inputChar);	
	}
	else if(inputChar>=97 && inputChar<=122)
	{
		printf("%3c is a small letter\n",inputChar);
	}
	else if(inputChar>=48 && inputChar<=57)
	{
		printf("%3c is a Number\n",inputChar);
	}
	else
	{
		printf("%3c is a special Symbol with Ascii Value %4d\n",inputChar,inputChar);
	}
	return(0);
}
