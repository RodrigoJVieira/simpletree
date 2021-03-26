#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int blocks, j, i, k;

    do
    {
        blocks = get_int("Height: ");
    }
    while (blocks <1 || blocks > 8);

    for( i = 1; i <= blocks; i++)
    {
        for (j = 1; j <= (blocks - i); j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");

        for (k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
