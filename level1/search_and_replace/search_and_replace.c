#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int i;
		i = 0;
		while(argv[1][i] && !argv[2][1] && !argv[3][1])
		{
			if(argv[2][0] == argv[1][i])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}

	}	

	write(1, "\n", 1);
	return 0;
}