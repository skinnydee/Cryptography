#include<stdio.h>

int main()
{
	int height;
	printf("Enter the height:");
	scanf("%d",&height);
	
		int num = height;
	for(int i = 0;i <= height; i++)
	{
		for(int j = num;j > 0;j--)
		{
			printf(" ");
		}
		num--;
		for(int row = 0; row <= i;row++)
		{
			printf("#");
		}
		printf(" ");
		for(int k = 0;k <= i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
