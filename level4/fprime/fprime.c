#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int number;
		
		number = atoi(argv[1]);
		i = 2;
		while(i <= number)
		{
			while(number % i == 0)
			{
				printf("%d", i);
				number /= i;
				if(number / i)
					printf("*");

			}
			i++;

		}
	}

	printf("\n");
	return 0;
}