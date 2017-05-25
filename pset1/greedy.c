/* Implement a program that calculates the minimum number of coins required to give a user change. */

#include <math.h>
#include <stdio.h>
#include <cs50.h>

int coins(int change_int); 

int main(void)
{
    float change;
    do   /* Check the input first */
    {
        printf("O hai! How much change is owed?\n");
        change = get_float();
    }
    while(change<0);   /* If FALSE, then moves on */
    float change_hund = change*100;
    double round(double change_hund);   /* Round to nearest integer. Still type = float */
    int change_int = (int) round(change_hund);   /* Change float to int */
    printf("%i\n", coins(change_int));
}

int coins(int change_int)   /* Define new variable coins */
{
    int q = change_int/25;
    int d = (change_int%25)/10;
    int n = (change_int - 25*q - 10*d)/5;
    int p = (change_int - 25*q - 10*d - 5*n);
    return q+d+n+p;
} 
