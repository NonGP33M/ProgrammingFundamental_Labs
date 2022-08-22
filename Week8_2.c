#include <stdio.h>

float square_root(float input)
{
    if (input <= 0)
        return 0;
    float sqrt = input / 3;
    int i;
    for (i = 0; i < 32; i++)
        sqrt = (sqrt + input / sqrt) / 2;
    return sqrt;
}

int main()
{
    float input;
    scanf("%f", &input);
    printf("%f", square_root(input));
}