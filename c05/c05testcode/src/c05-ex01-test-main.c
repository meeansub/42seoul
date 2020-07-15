
	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

int		ft_recursive_factorial(int nb);

void printmsg(const char *msg, ...)
{
	char *newstr = (char *)malloc(strlen(msg) + 2);
	strcpy(newstr, msg);
	strcat(newstr, "\n");

	va_list args;
	va_start(args, msg);
	vprintf(newstr, args);
	va_end(args);
	// printf("%s\n", msg);
	free(newstr);
}

void printline()
{
	printf("\n------------------------------------------------------------\n");
}

void print_testing(const char *code)
{
	printmsg("\n## testing code :");
	printf("%s", code);
}

int main()
{
		printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(4));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(6));
	printf("%d\n", ft_recursive_factorial(7));
	printf("%d\n", ft_recursive_factorial(8));
	printf("%d\n", ft_recursive_factorial(9));
}
