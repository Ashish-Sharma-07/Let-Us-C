/*Playing with pointers*/
# include<stdio.h>

int main()
{
	int a[]={1,2,3,4,5,6,7};
	int *p[]={a,a+1,a+2,a+3,a+4,a+5,a+6,a+7};
	int i;
	int **ptr;
	ptr = p;
	for(i=0;i<7;i++)
	{
		printf("Value: %d\tAt Address: %d\n",a[i],&a[i]);
	}
	printf("\n");
	for(i=0;i<7;i++)
	{
		printf("Value : %d\tStored At: %d\tWith Base Address: %d\n",*(p[i]),p[i],&p[i]);
	}
	
	printf("\n%u %d",a, *a);//value of base address of a and value at a[0]
	printf("\n%u %u %d",p,*p,**p); //base address of p, value stored(address of a) at p[0], value at address stored at p[0]
	printf("\n%u %u %d",ptr,*ptr,**ptr);
	//address of ptr,base address of p, value at address stored at p
	
	return(0);
}
