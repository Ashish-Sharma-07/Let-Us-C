# include<stdio.h>

int main()
{
	int *p[4];
	int i = 3;
	int j = 4;
	int k = 5;
	int l = 6;
	p[0] = &i;
	p[1] = &j;
	p[2] = &k;
	p[3] = &l;
	
	int r;
	
	printf("address of 'i'\t%d\t value:%d\n",&i,i);
	printf("address of 'j'\t%d\t value:%d\n",&j,j);
	printf("address of 'k'\t%d\t value:%d\n",&k,k);
	printf("address of 'l'\t%d\t value:%d\n",&l,l);
	
	printf("address of p %d\n",p);
	for(r=0;r<4;r++)
	{
		printf("Address\t%d stored Address\t%d value\t%d\n",&p[r],p[r],*(p[r]));	
	}
	return(0);
}
