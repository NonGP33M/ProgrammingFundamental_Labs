#include<stdio.h>

int main()
{
    int x,y,z,a;
    scanf("%d %d %d",&x,&y,&z);
    if(x >= y && x >= z)
    {
        a = x;
    }
    else if(y >= x && y >= z)
    {
        a = y;
    }
    else if(z >= x && z >= y)
    {
        a = z;
    }
    printf("Largest number = %d",a);
    return 0;
}
