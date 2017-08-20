#include<stdio.h>

int main()
{
	float costPrice=0,sellingPrice=0,profit=0,loss=0;
	printf("Enter the Selling And Cost Price Respectively: ");
	scanf("%f %f",&sellingPrice,&costPrice);
	
	if(costPrice>sellingPrice)
	{
		loss = costPrice-sellingPrice;
		printf("You Have Incurred A loss of: %.3f\n",loss);
	}
	else if(costPrice<sellingPrice)
	{
		profit = sellingPrice-costPrice;
		printf("You Have Incurred A Profit of: %.3f\n",profit);
	}
	else if(costPrice==sellingPrice)
	{
		loss = costPrice-sellingPrice;
		printf("You Have neither Incurred a loss or profit\n");
	}
	return(0);
}
