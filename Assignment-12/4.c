#include <stdio.h>

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            j >= 5-i+1 && j <= 5+i-1 ? printf("*") : printf(" ");
        }
        printf("\n");
    }
    return 0;
}
