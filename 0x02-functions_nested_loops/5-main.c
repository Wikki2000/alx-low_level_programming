/**
 * print_sign - Print the that prints the sign of a number
 * @n: Stores the number
 */
int print_sign(int n)
{
        if (n > 0)
        {
                printf("+, ");
                return (1);
                putchar(10);
        }

        else if (n == 0)
        {
                printf("0, ");
                putchar(10);
        }

        else if (n < 0)
        {
                printf("-, ");
                putchar(10);
        }
}
