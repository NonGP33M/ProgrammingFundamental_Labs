#include<stdio.h>
long factorial(int x)
{
    int i, result = 1;
    for (i = x ; i > 1 ; i--)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int in;
    scanf("%d",&in);
    printf("%d",factorial(in));
    return 0;
}