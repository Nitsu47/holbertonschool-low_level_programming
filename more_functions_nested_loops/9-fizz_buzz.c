#include <stdio.h>

int
main(void)
{
int x;

for (x = 1; x <= 100; x++)
	{
	if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			if (x == 100)
			{
			printf("Buzz");
			printf("\n");
			}
		else
		{
			printf("Buzz ");
		}
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}
		x++;
	}
	return (0);
}
