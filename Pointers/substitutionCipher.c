#include <stdio.h>
# include<string.h>
int currentCol= 0;
int currentRow =0;
int main()
{
	int i,j,maxCol,maxRow,k=0;
	char str[1000];
	char output[1000];
	static char grid[10][1000];
	scanf("%d",&maxRow);
	scanf("%s",str);
	maxCol=strlen(str);
	while(currentCol<maxCol)
	{
		if(currentRow<maxRow)
		{
			while(currentRow<maxRow)
			{
				grid[currentRow++][currentCol++]='X';
			}

		}
		else
		{
			currentRow=currentRow-2;
			while(currentRow>=1)
			{
				grid[currentRow--][currentCol++]='X';
			}
			
		}
		
	}
	
	for(i=0;i<maxRow;i++)
	{
		for(j=0;j<maxCol;j++)
		{
			if(grid[i][j]=='X')
			grid[i][j]=str[k++];
		}
	}
	
	for(i=0;i<maxRow;i++)
	{
		for(j=0;j<maxCol;j++)
		{
			printf("%c ",grid[i][j]);
		}
		printf("\n");
	}
	
	currentCol = 0;
	currentRow = 0;
	k=0;
	while(currentCol<maxCol)
	{
		if(currentRow<maxRow)
		{
			while(currentRow<maxRow)
			{
				output[k++]=grid[currentRow++][currentCol++];	
			}

		}
		else
		{
			currentRow=currentRow-2;
			while(currentRow>=1)
			{
				output[k++]=grid[currentRow--][currentCol++];
			}
			
		}
		
	}
	puts(output);
	return(0);
}
