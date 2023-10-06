#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Print the minimum number of coins
 * @argc: The number of command-line entered
 * @argv: The array of arguement entered as string
 *
 * Return: 
*/
int main(int argc, char *argv[])    
{
        int cent;
        int mncoin = 0;

        if (argc != 2)
                puts("Error");      

        cent = atoi(argv[1]);       

        while (cent > 0)
        {
                if (cent >= 25)     
                        cent -= 25; 

                else if (cent >= 10)
                        cent -= 10; 

                else if (cent >= 5)
                        cent -= 5;

                else if (cent >= 2)
                        cent -= 2;

                else if (cent >= 1)
                        cent -= 1;

                mncoin++;
        }
        printf("%d\n", mncoin);
        return (0);
}
