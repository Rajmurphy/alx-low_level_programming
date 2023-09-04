#include <stdio.h>

long long int largest_prime_factor(long long int num)
{
	long long int largest_prime = -1;

	while (num % 2 == 0)
	{
		largest_prime = 2;
		num /= 2;
	}
	
	for (long long int i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_prime = i;
			num /= i;
		}
		
		if (num > 2)
		{
			largest_prime = num;
		}
		
		return largest_prime;
}

int main(void)
{
	long long int num = 612852475143;
	long long int largest_prime = largest_prime_factor(num);
	
	printf("%lld\n", largest_prime);
	
	return 0;
}
