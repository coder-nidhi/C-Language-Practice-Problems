#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter any character : ");
    scanf("%c", &ch);
    

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is an ALPHABET");
    }
    else
    {
        printf("Character is NOT AN ALPHABET");
    }

    return 0;
}
