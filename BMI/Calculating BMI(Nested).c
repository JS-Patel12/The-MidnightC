#include <stdio.h>

main()
{
	int weight;
	float height;
	
	printf("Enter your weight : ");
	scanf("%d",&weight);
	printf("Enter your height : ");
	scanf("%f",&height);
	
	float BMI = weight/(height)*(height);
	
	if(BMI < 18.5)
	{
		printf("You are Underweight.");
	}
	else
	{
		if(BMI >= 18.5 && BMI <= 24.9)
		{
			printf("You have an Healthy Weight.");
		}
		else
		{
			if(BMI >= 25.0 && BMI <= 29.9)
			{
				printf("You are Overweight.");
			}
			else
			{
				printf("You are Obese.");
			}
		}
	}
}
