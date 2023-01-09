#include <stdio.h>

int main()
{
    for(int i = 1; i <= 4; i++)
    {
        int x=1;
        for(int j = 1; j <= 7; j++)
        {
            if( j >=i && j<=8-i)
            {
                if(j<=i || j>=8-i)
                    printf("1");
                else
                    printf("0");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
