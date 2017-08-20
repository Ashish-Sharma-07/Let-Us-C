# include<stdio.h>

int main()
{
	int array[][3]={
					{1,2,3},
					{4,5,6},
					{8,9,0}
				};
	int (*p)[3]; // pointer to an array of 3 elements
	int *q; //integer pointer
	register int j,i;
	p = array;
	
	for(i=0;i<3;i++)
	{
		q = *p;
		for(j=0;j<3;j++)
		{
			printf("[%d][%d] = %d",i,j,*q);
			q++;	
		}
		p++;
		printf("\n");
	}
	
	return(0);
}
