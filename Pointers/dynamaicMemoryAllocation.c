 # include<stdio.h>
 # include "malloc.h"
 
 int main()
 {
 	int no;
 	int *p;
 	int sum = 0;
 	int i;
 	printf("Enter No. of Elements: ");
 	scanf("%d",&no);
 	
 	p = (int *)malloc(no*(sizeof(int)));
 	
 	printf("Enter The Elements:\n");
 	for(i=0;i<no;i++)
 		scanf("%d",p+i);

	for(i=0;i<no;i++)
	{
		printf("Element: %d\n",*(p+i));
		sum += *(p+i);
	}
 	printf("%d\n",sum);
 	return(0);
 }
