#include<stdio.h>
#include<string.h>

int main()
{
    char x[120];
    printf("Input : ");
    scanf("%s",&x);
    printf("Output : %s",strrev(x));
    return 0;
}
