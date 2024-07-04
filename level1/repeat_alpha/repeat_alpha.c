#include <unistd.h>

int main(int argc, char const *argv[])
{
	if(argc == 2)
	{
		int i;
		int n;
		n = 0;
		i = 0;

		while(argv[1][i])
		{
			n = 0;
			if((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
			{
				while(n <= (argv[1][i] - 97))
				{
					write(1, &argv[1][i], 1);
					n++;
				}
			}
			else if((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				while(n <= (argv[1][i] - 65))
				{
					write(1, &argv[1][i], 1);
					n++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
			
		}
	}
	write(1, "\n", 1);
	return 0;
}