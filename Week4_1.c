#include<stdio.h>
int main()
{
    int in,i,j,k = 0;
    scanf("%d",&in);
    for (i = in ; i > 0 ; i--)
    {
        for (j = 0 ; j <= k ; j++)
        {
            printf(" ");
        }

        for (j = (i*2)-1 ; j > 0 ; j--)
        {
            printf("*");
        }
        printf("\n");
        k++;
    }

    for (i = 2 ; i <= in ; i++)
    {
        for (j = in+1 ; j > i ; j--)
        {
            printf(" ");
        }

        for (j = 1 ; j <= (i*2)-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}