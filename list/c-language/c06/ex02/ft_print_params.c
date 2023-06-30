#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
