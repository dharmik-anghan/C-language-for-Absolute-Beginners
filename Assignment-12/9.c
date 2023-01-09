#include <stdio.h>

int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5-i; j++)
            printf("%d", 5-j-i);
        printf("\n");
    }
    return 0;
}
