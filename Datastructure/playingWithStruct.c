# include<stdio.h>

typedef struct directory{
	int data;
}Dir;

Dir *getDir()
{
	Dir d;
	d.data = 1234;
	return &d;	//returns an address of local variable
}

Dir *getStaticDir()
{
	static Dir d;
	d.data = 30;	
	return &d;
}

int main()
{
	Dir a = *getDir();
	/*Wrong Output since the datastructure d is lost once the getDir returns*/
	printf("%d\t",a.data);	
		
	Dir b = *getStaticDir();
	printf("%d\t",b.data);
	return(0);
}
