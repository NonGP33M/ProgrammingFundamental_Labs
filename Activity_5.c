#include<stdio.h>
int main()
{
    char in[120];
    char *x;
    int i;
    x = in;
    scanf("%s",&in);
    while (*x != '\0')
    {
        if(*x != *(x+1))
        {
            printf("%c",*x);
        }
        x++;
    }
	return 0;
}