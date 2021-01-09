#include<stdio.h>
int main(void)
{
	long long int  num;
	long int count = 0,count1 = 0,mult = 0, total;
	scanf("%lli",&num);
	long long int temp = num/10;
	while(temp > 0)
	{
		long int mod = temp%10;
		temp = temp/100;
		mult = mod*2;
		if(mult/10 != 0)
		{
			long int sum = mult%10;
			mult /= 10;
		//	printf("sum = %li\n",sum);
		//	printf("mult = %li\n",mult);
			mult += sum;
			count += mult;
		}
		else
		{
			count += mult;
		}
		//printf("Sum = %li\n",mult);
		//printf("%lli\n",temp);
	}
	while(num > 0)
	{
		long int mod = num%10;
		num /= 100;
		count1 += mod;
	}
	//printf("count1 =%li\n", count1);	
	//printf("count =%li",count);
	total = count1 + count;
	if (total%10 == 0)
	{
		printf("Valid");
	}	
	else
	{
		printf("invalid");
	}
}
