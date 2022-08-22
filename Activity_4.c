#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char in[120];
    int i,j,count;
    scanf("%s",&in);
    for (i = 0 ; i <= strlen(in) ; i++)
    {
        if (!(isdigit(in[i-2])) && isdigit(in[i-1]) && !(isdigit(in[i])))
        {
            count = in[i-1]-'0';
            for (j = 0 ; j < count ; j++)
            {
                printf("%c",in[i]);
            }
        }
        else if (isdigit(in[i-2]) && isdigit(in[i-1]) && !(isdigit(in[i])))
        {
            count = (in[i-2]-'0')*10 + in[i-1]-'0';
            for (j = 0 ; j < count ; j++)
            {
                printf("%c",in[i]);
            }
        }
        else if (!(isdigit(in[i-1])) && !(isdigit(in[i])))
        {
            printf("%c",in[i]);
        }
    }
    return 0;
}