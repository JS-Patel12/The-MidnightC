#include <stdio.h>

main()
{
	int num,i,end;
	
	printf("Enter the number : ");
	scanf("%d",&num);//2
	printf("Enter the end : ");
	scanf("%d",&end);
	
	if(1<=end && end<=100 && 1<=num)
	{
		for(i=1;i<=end;i++)
		printf("%d x %d = %d\n",num,i,num*i);
	}
	else
	{
		printf("Invalid value entered");
	}
}
