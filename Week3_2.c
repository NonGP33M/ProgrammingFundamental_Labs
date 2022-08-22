#include<stdio.h>
#include<string.h>
int main()
{
    int i,a = 0;
    char x[120],y[120];
    printf("Input : ");
    scanf("%s",&x);
    for (i = strlen(x) - 1 ; i >= 0 ; i--)
    {
        y[a] = x[i];
        a++;
    }
    printf("Output : %s",y);
    return 0;
}
