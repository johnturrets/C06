#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (!(*str == '\0'))
		ft_putchar(*(str++));
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	int i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return 0;
}
