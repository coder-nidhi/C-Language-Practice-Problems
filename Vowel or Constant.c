// to Check Whether a Character is Vowel or Consonant
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c", &ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u')
    printf("It is a vowel\n");
    
    else
    printf("It is a constant");

    return 0;
}

