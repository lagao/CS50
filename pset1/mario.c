/* Implement a program that prints out a double half-pyramid of a specified height. */

#include <stdio.h>
#include <cs50.h>

void print_pyramid(int h);

int main(void)
{
    int n;   /* Can define int n in {} here */
    do   /* do {} while() means run first, then check conditions */
    {
        printf("Height: ");
        n = get_int();
    }
    while (n<0 || n>23);   /* If FALSE, go past, if TRUE, repeat. In this case, we only want to repeat if statement false */
    print_pyramid(n);
}


void print_pyramid(int h)
{
        for(int n=0; n<h; n++)
        {
            for(int s=0; s<(h-n-1); s++)
            {
                printf(" ");
            }
            for(int a=0; a<(n+2); a++)
            {
                printf("#");
            }
            printf("\n");
        }
}

