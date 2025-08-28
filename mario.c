//MARIO-LESS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char input[100];
    int n = 0;
    while (1)
    {
        printf("No of lines: ");
        if (fgets(input, sizeof(input), stdin) != NULL)
        {
            
            if (sscanf(input, "%d", &n) == 1 && n > 0)
            {
                break; 
            }
        }
        printf("Please enter a positive integer greater than 0.\n");
    }

    for (int r = 1; r <= n; r++)
    { 
        for (int s= 0; s <n - r; s++)
        {
            printf(" ");
        }
        for (int t = 0; t< r; t++)
        {
            printf("#");
        }
        printf("  ");
        
        for (int j=0;j<r;j++)
            printf("#");

        printf("\n");
    }
    return 0;
}