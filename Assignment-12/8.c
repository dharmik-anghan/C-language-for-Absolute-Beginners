#include <stdio.h>

int main()
{
    int k=0;
    for(int i =1; i <=5; i++)
    {
        i<4?k++:k--;
        for(int j = 1; j <=5; j++)
        {
            if(j>=4-k && j <= 2+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
