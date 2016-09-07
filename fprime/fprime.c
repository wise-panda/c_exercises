#include <stdio.h>

int main(void)
{
	int number;
	int div;

	printf("Enter a number to know its prime factor : ");
	scanf("%d", &number);
	div = 2;

	while(number != 0)
	{
		if (number % div != 0)
			div = div + 1;
		else
		{
			number = number / div;
			printf("%d ", div);
			if (number == 1)
				break;
		}
	}
	printf("\n");
	return (0);
}
