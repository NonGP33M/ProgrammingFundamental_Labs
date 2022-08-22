#include<stdio.h>
#include<string.h>
#include<ctype.h>
char character[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0'};
char *morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--",
"--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----","/"," "};
int main()
{
    char input[120];
    gets(input);
    for ( int i = 0 ; i < strlen(input) ; i++)
    {
        for (int j = 0 ; j < strlen(character) ; j++)
        {
            if(tolower(input[i]) == character[j] && input[i] != ' ')
            {
                printf("%s",morse[j]);
                printf(" ");
            }
        }
    }
    return 0;
}