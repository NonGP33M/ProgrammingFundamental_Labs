#include<stdio.h>
void swap(int* x,int* y)
{
    int t1 = *x;
    int t2 = *y;
    *x = t2;
    *y = t1;
}
int main()
{
    int a,b;
    printf("Input:\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("Output:\n%d %d",a,b);
    return 0;
}