#include <stdio.h>

int main()
{
    for(int i = 0; i < 4; i++)
    {
        int c= 65;
        for(int j = 0; j < 4-i; j++)
            printf("%c", c++);
        printf("\n");
    }
    return 0;
}
