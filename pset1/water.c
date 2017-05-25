/* 2. Create program that reports a user's water usage, converting minutes spent in shower to bottles of drinking water. */

#include <stdio.h>
#include <cs50.h>

void print_minutes(int m);

int main(void)
{
    printf("Minutes: ");   /* What you prompt user */
    int minutes = get_int();   /* Function minutes is type=int and grabs integer */
    print_minutes(minutes);   /* After grabbing int and storing as function 'minutes', use function print_minutes using that as input */
    
}

void print_minutes(int m)   /* defining what is function 'print_minutes' */
{
    printf("Bottles: %i\n", m*12);
}


