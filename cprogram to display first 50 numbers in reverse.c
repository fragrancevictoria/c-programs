/* C Program to Print Natural Numbers in Reverse within a Range */
 
#include<stdio.h>

int main()
{
  	int i, Starting_Value, End_Value;
  
  	printf("\n Please Enter the Starting Value (Maximum Integer or Upper Limit) : ");
  	scanf("%d", &Starting_Value);
  	
  	printf("\n Please Enter the End Value (Minimum Integer or Lower Limit)  : ");
  	scanf("%d", &End_Value);  	
  	
  	printf("\n List of Natural Numbers from %d to %d are \n", Starting_Value, End_Value);  	
	for(i = Starting_Value; i >= End_Value; i--)
  	{
    	printf(" %d \t", i);
  	}
  
  	return 0;
}
