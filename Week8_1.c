#include <stdio.h>

float square_root(int input)
{
    if (input <= 0)
        return 0;
    float sqrt;
    float temp;
    sqrt = input / 2;
    temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (input / temp + temp) / 2;
    }
    return sqrt;
}

int main()
{
    int input;
    scanf("%d", &input);
    printf("%f", square_root(input));
}