# include<stdio.h>

int recursiveSum(int number);
int normalSum(int number);

int main()
{
	int num,ans;
	printf("Enter A 5-digit Number: ");
	scanf("%d",&num);
	ans = recursiveSum(num);
	printf("Sum of the digits is: %d\n",ans);
	ans = normalSum(num);
	printf("Sum of the digits is: %d\n",ans);
	return(0);
}


/*Recursive Sum*/

int recursiveSum(int number)
{
	if(number == 0)
	return 0;
	int rem = number%10;
	return (rem +recursiveSum(number/10));
}

int normalSum(int number)
{
	int sum=0,rem;
	while(number>0)
	{
		rem = number%10;
		sum+=rem;
		number = number/10;
	}
	return sum;
}
