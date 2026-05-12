#include <stdio.h>

main()
{
    float a, b, c, min;
    
    printf("Enter the first value : ");
    scanf("%f", &a);
    printf("Enter the second value : ");
    scanf("%f", &b);
    printf("Enter the third value : ");
    scanf("%f", &c);
    
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    
    printf("%.2f is minimum.\n", min);
    
    if(a<b)
    {
    	if(a<c)
    	{
    		printf("The Number is in the first row.");
		}
		else
		{
			printf("The Number is in third row.");
		}
	}
	else
	{
		if(b<c)
		{
			printf("The Number is in the second row.");
		}
		else
		{
			printf("The Number is in the third row.");
		}
	}
}
