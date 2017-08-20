/*Returning More than one value to the main function*/
#include<stdio.h>

void additionOfFiveNumber(int,int,int,int,int,float *,float *,float *);

int main()
{
int a1,a2,a3,a4,a5;
float sum,avg,sd;
printf("Enter 1st No.: ");
scanf("%d",&a1);
printf("Enter 2nd No.: ");
scanf("%d",&a2);
printf("Enter 3rd No.: ");
scanf("%d",&a3);
printf("Enter 4th No.: ");
scanf("%d",&a4);
printf("Enter 5th No.: ");
scanf("%d",&a5);
additionOfFiveNumber(a1,a2,a3,a4,a5,&sum,&avg,&sd);
printf("Sum:%.3f\nAvg: %.3f\nStandard Deviation: %.3f",sum,avg,sd);
return(0);
}

void additionOfFiveNumber(int a1,int a2,int a3,int a4,int a5,float *sum,float *avg,float *sd)
{
	*sum = a1+a2+a3+a4+a5;
	*avg = (*sum)/5;
	*sd = (a1-*avg)*(a1-*avg)+(a2-*avg)*(a2-*avg)+(a3-*avg)*(a3-*avg)+(a4-*avg)*(a4-*avg)+(a5-*avg)*(a5-*avg);
	*sd = (*sd)/5;
}
