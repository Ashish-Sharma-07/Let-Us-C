/*
Pointers
*/

#include<stdio.h>

void calculate(int s1,int s2,int s3, float *avg,float *percent)
{
	*avg = (s1+s2+s3)/3;
	*percent = ((float)(s1+s2+s3)/(240))*100;
}

int main()
{
	int sub1,sub2,sub3;
	float avg,percent;
	
	printf("Enter Subject 1 marks: ");
	scanf("%d",&sub1);
	printf("Enter Subject 2 marks: ");
	scanf("%d",&sub2);
	printf("Enter Subject 3 marks: ");
	scanf("%d",&sub3);
	
	calculate(sub1,sub2,sub3,&avg,&percent);
	
	printf("Percentage: %5.3f\n",percent);	
	printf("Average: %5.3f",avg);
	return(0);
}
