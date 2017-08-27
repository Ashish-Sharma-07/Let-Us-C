# include<stdio.h>

int main()
{
	int a[]={1,2,3,4,5,6,7};
	int *p[]={a,a+1,a+2,a+3,a+4,a+5,a+6,a+7};
	int **ptr = p;
	
	ptr++;
	printf("\n %d %d %d",ptr-p,*ptr-a,**ptr);
	/*
	let a's base address be 1234
	let p's base address be 5678
	let ptr's address be 9999
	ptr++;
	increment p by 1 5678+1
	hence ptr-p 5678 +1 -5678 = 1
	hence *ptr - a == (p + 1) - a =  (a + 1) - a =1
	hence **ptr = *(p+1)=*(a+1)=a[1] = 2
	*/
	*ptr++;
	printf("\n %d %d %d",ptr-p,*ptr-a,**ptr);
	/*
	*ptr++ = (*ptr)++ = p++ = p+2
	ptr - p = p+2-p =2
	*ptr - a = *(p +2) - a = a+2-a = 2
	*/
	
	*++ptr;
	printf("\n %d %d %d",ptr-p,*ptr-a,**ptr);
	/*
	*(++ptr) = *(p+2+1) =*(p+3) = a+3
	ptr - p = p+3-p =3
	*ptr - a= *(p+3) - a = a+3-a = 3
	**ptr = *(*(p+3))=*(a+3)=a[3]= 4
	*/
	
	++*ptr;
	printf("\n %d %d %d",ptr-p,*ptr-a,**ptr);
	/*
	++*ptr = ++(*ptr) = ++(p+3) = p+4
	ptr - p = p+4-p = 4
	*(ptr)-a = a+4-a = 4
	**(ptr) = a[4]
	*/
	return(0);
}
