#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int tree, j, i, k;

    do
    {
        tree = get_int("Height: ");
    }
    while (tree <1 || tree > 20);

    for( i = 1; i <= tree; i++)
    {
        for (j = 1; j <= (tree - i); j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("/");
        }
      
        for (k = 1; k <= i; k++)
        {
            printf("\\");
        }
        printf("\n");
    }
}
