#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_write(int a)
{
    ft_putchar(a / 10 + 48);
    ft_putchar(a % 10 + 48);
}

void    ft_print_comb2(void)
{
    int n1;
    int n2;

    n1 = 0;
    while(n1 <= 98)
    {
        n2 = n1 + 1;
        while(n2 <= 99)
        {
            ft_write(n1);
            ft_putchar(' ');
            ft_write(n2);

            if(n1 != 98 || n2 !=99)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
			n2++;
        }
		n1++;
    }
}
int     main(void)
{
    ft_print_comb2();
}