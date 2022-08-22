#include<stdio.h>

int main()
{
    int x[3],a,i;
    scanf("%d %d %d",&x[0],&x[1],&x[2]);
    a = x[2];
    for( i = 0 ; i < 2 ; i++ )
    {
        if(x[i] >= a)
            a = x[i];
    }
    printf("Largest number = %d",a);
    return 0;
}
